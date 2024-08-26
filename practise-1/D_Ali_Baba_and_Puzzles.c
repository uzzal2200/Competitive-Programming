#include<stdio.h>
int main()
{
     long long  int a,s,c,d;
    scanf("%lld%lld%lld%lld",&a,&s,&c,&d);
    
    if(d == a+s*c)
    {  
        printf("YES");
    }
    else if(d == a*s-c)
    {
       printf("YES");  
    }
    else if (d == a+s-c)
    {
       printf("YES");  
    }
    else if(d == a-s+c)
    {
     printf("YES");
    }
    else if(d== a-s*c)
    {
         printf("YES");
    }
    else if(d == a*s+c)
    {
         printf("YES");
    }
    
  else  
{
    printf("NO");
}    

    return 0;
}