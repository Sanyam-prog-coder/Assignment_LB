#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Min
// Description  : Accept No. from user and return smallest digit
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo >= 1)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Minimum Number is : %d\n", iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 8468215  Output : 1
//
////////////////////////////////////////////////////////////////////////