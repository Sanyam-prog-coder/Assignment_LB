#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
// Function     :   Multfact
// Description  :   Accept No. from user & display Multiplication of Factor
// Auther       :   Sanyam Bhupendrakumar Ravne
// Date         :   30/10/2025    
////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Input : 12   Output : 144
// Input : 13   Output : 1
// Input : 10   Output : 10
////////////////////////////////////////////////////////////////////////////