#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                abs(i-3);
                abs(j-3);
                printf("%d\n",);
            }
        }
    } 
    return 0;
}