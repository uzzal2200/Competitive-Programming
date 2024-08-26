#include<stdio.h>
void add(void)
{
int a,b,c;
scanf("%d%d%d",&a,&b);
c=a+b;
printf("%d\n",c);
}
void multy(void)
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=a*b;
    printf("%d",m);
}


int main()
{
     add();
     multy();
    
    return 0;
}
