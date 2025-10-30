#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
// Function     :   SumNonFact
// Description  :   Accept No. from user & Return summation of all NonFact
// Auther       :   Sanyam Bhupendrakumar Ravne
// Date         :   30/10/2025    
////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non-factors is: %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Input : 12   Output : 50
// Input : 10   Output : 37
////////////////////////////////////////////////////////////////////////////