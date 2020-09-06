#include<stdio.h>
#include<stdlib.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
}time1,time2;

void main()
{
    printf("enter first time\n");
    scanf("%d%d%d",&time1.hours,&time1.minutes,&time1.seconds);
    printf("enter second time\n");
    scanf("%d%d%d",&time2.hours,&time2.minutes,&time2.seconds);
    printf("the time diff is\n");

    int sec1,sec2,sec3;
    sec1=time1.hours*60*60 + time1.minutes*60 + time1.seconds;
    sec2=time2.hours*60*60 + time2.minutes*60 + time2.seconds;

    sec3= abs(sec1-sec2);

    printf("%d:%d:%d",sec3/3600,(sec3-((sec3/3600)*3600))/60,sec3-(((sec3/3600)*3600)+((sec3-((sec3/3600)*3600))/60)*60));

}