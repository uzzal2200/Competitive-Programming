#include<stdio.h>
#include<string.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
   char a[4];
   for(int i=0;i<n;i++)
   {
    scanf("%s",a);
    if(a[1]=='+')
    {
        s++;
    }
    else
    {
     s--;
    }
    
   }
   printf("%d\n",s);

    return 0;
}