#include<stdio.h>
int main()
{
 	int i=1,j,sp=10;
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}
		while (j<=sp);
		j=1;
		do
		{
			printf(" *");
			j++;
		}
			while(j<=i);
			printf("\n");
			sp--;
			i++;
	}
	while(i<=5);

	i=1;
	do
	{
		j=12;
		do
		{
			printf(" ");
			j--;
		}
		while(j>=sp);
 
		j=4;
		do
		{
			printf("* ");
			j--;
		}
		while(j>=i);

		printf("\n");
		sp--;
		i++;
	}
	while(i<=4);
	return 0;
}


