#include<stdio.h>
int main()
{
    int a,s;
    scanf("%d%d",&a,&s);
    int sub=a-s;
    if(sub>=0)
    {
        printf("%d\n",sub);
    } 
    else 
    {
     printf("0\n");
    }
    return 0;
}