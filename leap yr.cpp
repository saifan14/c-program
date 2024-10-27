#include <stdio.h>
int main()
{
	while(1)
	{
		int a,n;
		printf("enter year");
		scanf("%d",&n);
		if((n%4==0&&n%100!=0)||(n%400==0))
		{
			printf("it is leap yr\n");
		}
		else
		{
			printf("not leap yr\n");
		}
	}
	return 0;
}
