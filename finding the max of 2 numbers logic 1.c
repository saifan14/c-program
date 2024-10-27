#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is the maximum",a);
	}
	else
	{
		printf("%d is the maximum",b);
	}
	return 0;
}
