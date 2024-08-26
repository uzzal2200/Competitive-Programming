#include<stdio.h>

void fun(int *a,int n,int i,long long sum)
{
    if (i==n)
    {
        printf("%lld",sum);
        return;
    }
    sum = sum+a[i];
    fun(a,n,i+1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n,0,0); 
    return 0;
}