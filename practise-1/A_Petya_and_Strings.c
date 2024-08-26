#include<stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     scanf("%s %s",a,b);
     for(int i=0;i<strlen(b);i++)
     {
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]=b[i]+32;
        }
     }
     for(int j=0;j<strlen(a);j++)
     {
       if(a[j]>='A' && a[j]<='Z')
        {
            a[j]=a[j]+32;
        } 
     }
     int v=strcmp(a,b);
     if(v>0)
     {
        printf("1");
     }
     else if(v<0)
     {
     printf("-1");
     }
     else if(v==0)
     {
     printf("0");
     }
    return 0;
}