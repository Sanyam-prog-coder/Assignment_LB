#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Max
// Description  : Accept no.from user and return Largest digit
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////

int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;

    if(iNo >= 1)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("Maximum Number is : %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 465821   Output : 8
//
////////////////////////////////////////////////////////////////////////