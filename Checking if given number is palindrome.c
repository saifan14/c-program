#include<stdio.h>
int main()
{
	int n,r,p;
	printf("enter number");
	scanf("%d",&n);
	p=n;
	r=0;
	while(n!=0)
	{
		r=r*10+n%10;
		n/=10;
	}
	if(r==p)
	{
		printf("%d is palindrome",p);
	}
	else
	{
		printf("not palindrome");
	}
	return 0;    
}
