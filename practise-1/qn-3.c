#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n%2 == 0)
    {
     printf("even");
    }
    else if(n>=0 && n%2 !=0)
    {
        printf("odd");
    }
   else
   {
    printf("sorry! You give a negative int.");
   }
   return 0;
}
