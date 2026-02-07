#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function     : Mult
// Description  : Accept No. from user and return multiplication recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iMult = 1;

    if(iNo != 0)
    {
        iMult = iMult * (iNo % 10);
        Mult(iNo / 10);
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d\n",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Input    : 523   Outout  : 30
//
////////////////////////////////////////////////////////////////////////////////////