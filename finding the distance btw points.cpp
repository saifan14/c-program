#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,y,x;
	printf("enter point a =");
	scanf("%d",&a);
	printf("enter point b =");
	scanf("%d",&b);
	printf("enter point y =");
	scanf("%d",&y);
	printf("enter point x =");
	scanf("%d",&x);
	printf("distance between a and b =%f",(sqrt((a-b)*(a-b)+(y-x)*(y-x))));
	return 0;
}
