#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    if(N%3==0 && N%7==0)
    {
        printf("%d\n",i);
    }
    return 0;
}