#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* timeConversion(char time[]);

void main()
{
    char time[10];
    scanf("%s",time);

    char *newTime;
    newTime=(char*)malloc(8*sizeof(char));

    newTime=timeConversion(time);

}

char* timeConversion(char time[])
{
    char *newTime;
    newTime=(char*)malloc(8*sizeof(char));

    if(time[8]=='A')
    {
        for(int i=0;i<8;i++)
        {
            *(newTime+i)=time[i];
        }
    }
    printf("%s",newTime);

    return newTime;
}