#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountDiff
// Description  : Accept No. from user & return Diff betwn Sum of Even & Odd digit
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0; 
    int iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference Between Even & Odd %d",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
// 
// Input : 2395     Output : -15
// Input : -5733    Output : -18
//
//////////////////////////////////////////////////////////////////////////////////////
