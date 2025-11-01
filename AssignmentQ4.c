#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function    : RangeSumEvent
//  Description : Accept No. from User & return Addition of all Even No. Betwn Range
//  Auther      : Sanyam BhupendraKumar Ravne
//  Date        : 01/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int RangeSumEvent(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range ");
        return 0;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)

        iSum = iSum + i;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEvent(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Input : 25   Input : 35  Output : 150
// Input : 90   Input : 2   Output : Invalid Range Addition
//
/////////////////////////////////////////////////////////////////////////////////////
