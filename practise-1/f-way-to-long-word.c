
#include<stdio.h>
#include<string.h>
int main()
{
    int n,len;
    char s[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        len=strlen(s);
        if(len>10)
        {
            printf("%c%d%c",s[0],len-2,s[len-1]);
        }
        else 
        {
            printf("%s",s);
        }
        printf("\n");
    }
    return 0;
}
