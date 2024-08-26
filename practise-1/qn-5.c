#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >=10000)
    {
    printf("Guchi bag\n");
    if (tk>20000)
    {
    printf("Guchi belt");
    }
    
    }
    else if (tk >=6500)
    {
        printf("Ledis bag");
    }
    else
    {
        printf("something");
    }
    return 0;
   
}