#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
// Function     :   FactDiff
// Description  :   Accept No. from user & return diff betn sum of fact & 
//                  NonFact
// Auther       :   Sanyam Bhupendrakumar Ravne
// Date         :   30/10/2025    
////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt; 
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is: %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Input : 12   Output : -34
// Input : 10   Output : -29
// Input : -12  Output : 0
////////////////////////////////////////////////////////////////////////////