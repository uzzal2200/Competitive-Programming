#include<stdio.h>
#define CYCLE 60
#include<windows.h>

int main()
{
    int hour,minute,second;
    scanf("%d%d%d",&hour,&minute,&second);
    int h=0,m=0,s=0;
    while(1)
    {
        printf("\n\n###### STOP WATCH ######\n\n");
        printf("     %.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n##########################\n\n");
        if(h==hour && m==minute && s==second)
        {
            break;
        }
        s++;
        Sleep(1000);
        if(s==CYCLE)
        {
            m++;
            s=0;
        }
        if(m==CYCLE)
        {
            h++;
            m=0;
        }
        system("CLS");
    } 
    return 0;
}