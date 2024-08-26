#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[200];
   int cnt=0;
    for(int i=0;i<n;i++)
    {
     scanf("%s",s);
     if(s[i]==s[i+1])
     {
cnt++;
     }
    } 
    printf("%d",cnt);
    return 0;
}