#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Reverse
// Description  : Accept No.from user and return Reverse digits
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;
    
    if(iNo >= 1)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse Number are : %d\n",iRet);

    return 0;
}