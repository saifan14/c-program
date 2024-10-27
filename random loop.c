#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	while(1)
	{
	int n,a;
	printf("enter a number btw 1 and 10 = ");
	scanf("%d",&n);
	srand(time(NULL));
	int random = (rand()%10)+1;
	if(n==random)
	{
		printf("%d is the same %d\n",n,random);
	}
	else
	{
		printf("%d is not the same %d\n",n,random);
	}
	printf("enter 1 to continue and 2 to exit = ");
	scanf("%d",&a);
	if(a!=1)
	{
	    break;
	}
    }
	return 0;
}
