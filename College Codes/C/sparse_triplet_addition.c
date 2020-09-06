#include<stdio.h>
void main()
{
    int row1,col1;
    int c=0,f=0;
    printf("input row and column for first matrix\n");
    scanf("%d%d",&row1,&col1);
    int sparse1[row1][col1];
    printf("input first matrix\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&sparse1[i][j]);
            if(sparse1[i][j] !=0)
            c++;
        }
    }
    int row2,col2;
    printf("input row and column for second matrix\n");
    scanf("%d%d",&row2,&col2);
    int sparse2[row2][col2];
    printf("input second matrix\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            scanf("%d",&sparse2[i][j]);
            if(sparse2[i][j] !=0)
            f++;
        }
    }
    printf("--------%d---------\n",f);
    int trip1[c+1][3];
    int i1, j1, k1;
    k1 = 1;
    trip1[0][0] = row1;
    trip1[0][1] = col1;
    trip1[0][2] = c;
    for (i1 = 0; i1 < row1; i1++)
    {
        for (j1 = 0; j1 < col1; j1++)
        {
            if (sparse1[i1][j1] != 0)
            {
                trip1[k1][0] = i1;
                trip1[k1][1] = j1;
                trip1[k1][2] = sparse1[i1][j1];
                k1++;
            }
        }
    }
    int trip2[f+1][3];
    int i2, j2, k2;
    k2 = 1;
    trip2[0][0] = row2;
    trip2[0][1] = col2;
    trip2[0][2] = f;
    printf("-------%d-------\n",trip2[0][2]);
    for (i2 = 0; i2 < row2; i2++)
    {
        for (j2 = 0; j2 < col2; j2++)
        {
            if (sparse2[i2][j2] != 0)
            {
                trip2[k2][0] = i2;
                trip2[k2][1] = j2;
                trip2[k2][2] = sparse2[i2][j2];
                k2++;
            }
        }
    }
    printf("-------%d-------\n",trip2[0][2]);
    int len1=trip1[0][2];
    int len2=trip2[0][2];
    printf("\n");
    for(int i=0;i<=len1;i++)
        printf("%d\t%d\t%d \n",trip1[i][0],trip1[i][1],trip1[i][2]);
        printf("\n");
    for(int i=0;i<=len2;i++)
        printf("%d\t%d\t%d \n",trip2[i][0],trip2[i][1],trip2[i][2]);
    
    int trip3[len1+len2+1][3];
    for(int i=0;i<(len1+len2+1);i++)
    {
        for(int j=0;j<3;j++)
        trip3[i][j]=-1;
    }
    trip3[0][0]=row1;
    trip3[0][1]=col1;
    int counter=0;
    int position1=1,position2=1;
    for(int i=1;i<=len1+len2;i++)
    {
        if(trip1[position1][0]==trip2[position2][0] && trip1[position1][1]==trip2[position2][1])
        {
            trip3[i][0]=trip1[position1][0];
            trip3[i][1]=trip1[position1][1];
            trip3[i][2]=trip1[position1][2]+trip2[position2][2];
            counter++;
            position1++;
            position2++;
        }
        else if(trip1[position1][0]<trip2[position2][0] || trip1[position1][1]<trip2[position2][1])
        {
            trip3[i][0]=trip1[position1][0];
            trip3[i][1]=trip1[position1][1];
            trip3[i][2]=trip1[position1][2];
            counter++;
            position1++;
        }
        else if(trip1[position1][0]>trip2[position2][0] || trip1[position1][1]>trip2[position2][1])
        {
            trip3[i][0]=trip2[position2][0];
            trip3[i][1]=trip2[position2][1];
            trip3[i][2]=trip2[position2][2];
            counter++;
            position2++;
        }
        if(position1==len1+1 && position2==len2+1)
        break;
    }
    trip3[0][2]=counter;
    printf("\n");
    for(int i=0;i<=counter;i++)
        printf("%d\t%d\t%d \n",trip3[i][0],trip3[i][1],trip3[i][2]);
}