#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function    : RangeDisplayRev
//  Description : Accept No. from User & Display all No. in Reverce order betwn Range
//  Auther      : Sanyam BhupendraKumar Ravne
//  Date        : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range...");
        return;
    }
    for(int i = iEnd; i >= iStart; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 25  Input : 35  Output : 35 34 33 32 31 30 29 28 27 26 25
//  Input : 90  Input : 10  Output : Invalid Range
//  Input : -5  Input : 2   Output : 2 1 0 -1 -2 -3 -4 -5
//
///////////////////////////////////////////////////////////////////////////////////////////