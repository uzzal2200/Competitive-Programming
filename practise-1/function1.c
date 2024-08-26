#include<stdio.h>
int mul(int x,int y)
{
    int p;
    p=x*y;
    return p;
}
int main()
{
    
    int y= mul(10,4);
   // printf("%d",mul(10,4));
   printf("%d",y);
    return 0;
}