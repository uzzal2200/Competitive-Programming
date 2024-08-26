#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
int max=0,min=0;
min=a[0];
max=a[0];

int maxIndex=0;
int minIndex=0;
for(int i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
        maxIndex=i;
    }
    if(min>a[i])
    {
        min=a[i];
        minIndex=i;
    }
}
a[minIndex] = max;
a[maxIndex] = min;
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}