#include<stdio.h>
 int main()
{
    int DD,MM=12,YYYY=2020;
     printf("enter a date in the form of DD/MM/YYYY:");
     scanf("%d/%d/%d",&DD,&MM,&YYYY);
     printf(" DD-%d  ,MM-%d ,YYYY-%d ",DD,MM,YYYY);
    return 0;
}