#include <stdio.h>
int main()
{
	int c;
	printf("enter number");
	scanf("%d",&c);
	if(c<=10)
	{
		printf("child");
	}
	else if(c<20)
	{
		printf("teenager");
	}
	else if(c<50)
	{
		printf("adult");
	}
	else if(c>50)
	{
		printf("senior");
	}
	return 0;
}
