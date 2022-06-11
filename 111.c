#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,total;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("\t %d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter b[%d][%d]:",i,j);
			scanf("\t %d",&b[i][j]);
		}
	}
	printf("\n matrix a\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	printf("\n matrix b\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",b[i][j]);
	             
		}
	printf("\n");
	   		
	}
                        total a[i][j],b[i][j]=a[3][3]+b[3][3];
	                printf("\t %d %d",total ,a[i][j],b[i][j]);
       
}