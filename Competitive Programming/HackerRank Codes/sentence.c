#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    char ch,s[100],sen[100];

    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}