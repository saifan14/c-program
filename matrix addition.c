#include <stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("enter value for  array a and array b %d %d\n",i,j);
			scanf("%d%d",&a[i][j],&b[i][j]);
		}
	}
	printf("array a is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("array b is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	printf("sum of arrays are\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
	    }
	    printf("\n");
    }
	
	return 0;
}
