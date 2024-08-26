#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
{
    for(int j=0;j<strlen(s)-1;j++)
    {
        if(s[j]!='+')
        {
           if(s[j]>s[j+2])
           {
            char temp=s[j];
            s[j]=s[j+2];
            s[j+2]=temp;

           } 
        }
    }
}
puts(s);
    return 0;
}