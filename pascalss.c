#include <stdio.h>
unsigned long long int factorial(int y)
{

    int i,fact=1;

    if(y<0)
        printf("error");

    else

    {

        for(i=1;i<=y;i++)

        {

            fact=fact*i;

        }

    }

    return fact;

}

int main()

{

   unsigned long long int n,i,j,k,c,d,e;

     printf("enter the number of lines  you want : ");

     scanf("%llu",&n);

     for(i=1;i<=n;i++)
     {
         k=0;
         for(j=1;j<=2*n;j++)
         {
             if(k<i)
             {
                    if(j>=n-i+1 && j<=n+i-1)
                 {
                       printf("* ");
                       k++;
                 }
             else
                printf(" ");
             }

         }
         printf("\n");
     }
return 0;
}
