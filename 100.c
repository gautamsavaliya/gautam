#include<stdio.h>
int main()
{
 	int rollno,n1[5],n2[5],n3[5],total[5],per[5],i;
	for(i=0;i<5;i++)
	{
       	      printf("enter n1[%d] :",i);
	      scanf("%d",&n1[i]);
              printf("enter n2[%d] :",i);
	      scanf("%d",&n2[i]);
       	      printf("enter n3[%d] :",i);
	      scanf("%d",&n3[i]);
 	}
	for(i=1;i<5;i+=2)
	{
	  printf("\n :%d",i);
	  total[i]=n1[i]+n2[i]+n3[i];
          printf("\n :%d",total[i]0);
	}
		printf("\n total:%d",i);
}
