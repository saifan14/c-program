#include <stdio.h>
int main()
{
	int a,b;
	printf("enter numbers ");
	scanf("%d",&a);
	printf("enter numbers ");
	scanf("%d",&b);
	printf("%d is the sum\n",a+b);
	printf("%d is the diff\n",a-b);
	printf("%d is the product\n",a*b);
	printf("%.1f is the qut\n",(float)a/b);
	return 0;
}
