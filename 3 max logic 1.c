#include <stdio.h>
int main()
{
	int a,b,m,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	m=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is the  largest \n",m);
	return 0;
}
