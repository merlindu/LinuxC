#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>

void init_daemon(void)
{
	int pid1, pid2;
	int i;
	pid1 = fork();
	if( pid1 < 0 ){
		fprintf( stderr, "fork failed, process exit\n" );
		exit(1);//fork失败，退出
	}else if(pid1){
		fprintf( stderr, "Child process created, pid = %d\n", pid1 );
		fprintf( stderr, "parent process exit\n" );
		exit(0);//是父进程，结束父进程
	}

	//是第一子进程，后台继续执行
	if(setsid() == -1){//第一子进程成为新的会话组长和进程组长
		printf("setsid failed\n");
		exit(-1);
    }

	//并与控制终端分离
	pid2 = fork();
	if( pid2 < 0 ){
		fprintf( stderr, "fork failed, process exit\n" );
		exit(1);//fork失败，退出
	}else if(pid2){
		fprintf( stderr, "Child process created, pid = %d, " 
			"create in %d\n", pid2, pid1 );
		fprintf( stderr, "process %d exit.\n", pid1 );
		exit(0);//是第一子进程，结束第一子进程
	}

	//是第二子进程，继续
	//第二子进程不再是会话组长
	for(i=0;i< NOFILE;++i)//关闭打开的文件描述符
		close(i);

	chdir("/tmp");//改变工作目录到/tmp
	umask(0);
	//umask(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);//重设文件创建掩码 mask = arg & 0777

	return;
}


int main()
{
	FILE *fp;
	time_t t;
	init_daemon();//初始化为Daemon

	while(1){//每隔一分钟向test.log报告运行状态		
		fp = fopen("test.log", "a");
		if( fp >= 0 ){
			t = time(NULL);
			fprintf( fp, "I'm here at %s\n", asctime(localtime(&t)) );
			fclose(fp);
		}

		sleep(60);//睡眠一分钟
	}

	return 0;
}

