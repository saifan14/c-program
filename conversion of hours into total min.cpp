#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter hr ");
	scanf("%d",&a);
	printf("enter min ");
	scanf("%d",&b);
	c=a*60;
	printf("hour is %d",c+b);
	return 0;
}
