#include<stdio.h>
#include<stdlib.h>

char* kangaroo(int x1,int v1,int x2,int v2);

int main()
{
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

    char *res;
    res=kangaroo(x1,v1,x2,v2);
    printf("%c%c",res[0],res[1]);
    if(res[0]=='Y')
    printf("%c",res[2]);
}

char* kangaroo(int x1,int v1,int x2,int v2)
{
    char *res;
    res=(char *)malloc(3*sizeof(char));
    if(x2>x1 && v2>v1)
    {
        res[0]='N';res[1]='O';
        return res;
    }
    else
    {
        while(x1<=x2)
        {
            if(x1==x2)
            {
                res[0]='Y';res[1]='E';res[2]='S';
                return res;
            }
            x1=x1+v1;
            x2=x2+v2;
        }

        res[0]='N';res[1]='O';
        return res;
    }
    
}