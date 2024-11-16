#include <stdio.h>
int main()
{
    int i,j,a[10][10];
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("enter value for  array a %d%d\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix a is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
