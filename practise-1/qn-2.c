#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    char plus='+',minus='-',gun='*',vag='/';
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    float div=a*1.0/b;
    printf("%d %c %d = %d\n",a,plus,b,sum);
    printf("%d %c %d = %d\n",a,minus,b,sub);
    printf("%d %c %d = %d\n",a,gun,b,mul);
    printf("%d %c %d = %0.2f",a,vag,b,div);
    return 0;
}
