#include <stdio.h>

/*guess number*/

int main()
{
	int answer = 58;
	int num =0 ;
	while(1)
	{
		printf("Please input a number:\n");
		scanf("%d", &num);
		if(num == answer){
			printf("OK! The answer is %d \n",num);
			break;
		}
		if(num > answer)
			printf("greater than answer!Retry! \n");
		else
			printf("lower than answer!Retry! \n");
	}
}
