#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a,s,c;
        scanf("%d%d%d",&a,&s,&c);
        if(a+s+c>=2)
        {
         cnt++;
        }
        
        
    } 
    printf("%d\n",cnt);
    
      
    

    return 0;
}