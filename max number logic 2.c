#include <stdio.h>
int main()
{
	int a,b,l;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	l=a>b?a:b;
	printf("%d",l);
	return 0;
}
