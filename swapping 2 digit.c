#include <stdio.h>
int main()
{
	int n,rev;
	printf("enter 2-digit number ");
	scanf("%d",&n);
	if(n<10||n>99);
	int t = n/10;
	int o = n%10;
	rev = o*10+t;
	printf("rev number: %d\n",rev);
	return 0;
}
