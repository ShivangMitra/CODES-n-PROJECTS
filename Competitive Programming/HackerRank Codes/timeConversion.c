#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* timeConversion(char *time);

void main()
{
    char *time;
    time=(char *)malloc(10*sizeof(char));
    scanf("%s",time);

    char *newTime;
    newTime=(char*)malloc(8*sizeof(char));

    newTime=timeConversion(time);

    for(int i=0;i<8;i++)
    printf("%c",newTime[i]);

}

char* timeConversion(char *time)
{
    char *newTime;
    newTime=(char*)malloc(8*sizeof(char));

    if((time[8]=='A' && time[0]!='1' && time[1]!='2') || (time[8]=='P' && time[0]=='1' && time[1]=='2'))
    {
        for(int i=0;i<8;i++)
        {
            newTime[i]=time[i];
        }
    }
    else if(time[8]=='P')
    {
        for(int i=2;i<8;i++)
        {
            newTime[i]=time[i];
        }
        int hours;
        hours=(int)(((time[0]-'0')*10)+(time[1]-'0'));
        hours=hours+12;
        newTime[1]=hours%10+'0';
        hours=hours/10;
        newTime[0]=hours+'0';
    }
    else
    {
        for(int i=2;i<8;i++)
        {
            newTime[i]=time[i];
        }
        newTime[0]=newTime[1]='0';
    }
    
    return newTime;
}