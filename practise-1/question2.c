#include<stdio.h>
int main()
{
  
    int N;
    scanf("%d",&N);
    if(N%3==0)
    {
        printf("Yes\n");
    }
    else if(N%3!=0)
    {
        printf("No");
    }
    return 0;  
}

