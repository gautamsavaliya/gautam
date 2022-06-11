#include<stdio.h>
int main()
{
       char i,j;
       for(i='A';i<='Y';)
       { 
               for(j=1;j<=5;j++)
               {
                    printf("\t %c",i++);
               }
         printf("\n");
       }
    return 0;
}