#include<stdio.h>
int getFirstDayOfTheYear(int year)
{
    int day = (year*365 + ((year-1) / 4) - ((year-1) / 100)  + ((year-1) / 400))  % 7;
}
int main()
{
    char *month[]={"January","Fubruary","March","April","May","June","July","August","September","October","November","December"};
    int daysmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int totaldays,weekday=0,spacecnt=0,year;
    scanf("%d",&year);
    printf("\n\n***************** Welcome to %d *****************\n\n",year);
    //check if it is a leap year
    if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
    {
    daysmonth[1]=29;
    }
    // get the first of year
    weekday=getFirstDayOfTheYear(year);
    for(int i=0;i<12;i++)
    {
        printf("\n\n\n----------------------- %s ----------------------\n",month[i]);
        printf("\n    Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
        for(spacecnt=1;spacecnt<=weekday;spacecnt++)
        {
        printf("      ");
        }
        totaldays=daysmonth[i];
        for(int j=1;j<=totaldays;j++)
        {
            printf("%6d",j);
            weekday++;
            if(weekday>6)
            {
                weekday=0;
                printf("\n");
            }
        }
    } 
    return 0;
}