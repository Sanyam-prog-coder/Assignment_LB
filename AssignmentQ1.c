#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function    : RangeDisplay
//  Description : Accept No. from User & Display all No. Between the Range
//  Auther      : Sanyam BhupendraKumar Ravne
//  Date        : 01/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range...");
        return;
    }
    for(int i = iStart; i <= iEnd; i++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 25  Input : 35  Output : 25 26 27 28 29 30 31 32 33 34 35
//  Input : 90  Input : 10  Output : Invalid Range
//  Input : -5  Input : 2   Output : -5 -4 -3 -2 -1 0 1 2
//
/////////////////////////////////////////////////////////////////////////////////////