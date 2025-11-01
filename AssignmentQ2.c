#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function    : RangeDisplayEven
//  Description : Accept No. from User & Display all Even No. Between the Range
//  Auther      : Sanyam BhupendraKumar Ravne
//  Date        : 01/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range...");
        return;
    }
    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
//  Input : 25  Input : 35  Output : 26 28 30 32 34 
//  Input : 90  Input : 10  Output : Invalid Range
//  Input : -5  Input : 2   Output : -4 -2 0 2
//
/////////////////////////////////////////////////////////////////////////////////////