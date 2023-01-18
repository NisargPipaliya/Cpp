#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],n[100];
        int a[100]={0};
        int i,j,maxlength,m,q,r,t;
        printf("Enter the value of string : ");
        gets(s);
        a[0]=1;
        n[0]=' ';
        for(i=0,j=1;i<=strlen(s);i++,j++)
        {
            n[j]=s[i];
        }
        for(i=0;i<=strlen(s)+1;i++)
        {
           if(s[i]==' ' || s[i]=='\0')
            a[i]=1;
        }
     for(i=0;i<=strlen(s)+1;i++)
     {
         if(a[i]==1)
         {
             m=i;
             for(j=i+1;j<=strlen(s)+1;j++)
             {
                 if(a[j]==1)
                 {
                    q=j;
                    break;
                 }
             }
         }
    if(q-m>maxlength)
    {
        r=m;
        t=q;
        maxlength = t-r;
    }
}
 printf("%d",maxlength);
    for(i=r;i<t;i++)
    {
        printf("%c",s[i]);
    }
return 0;
}
