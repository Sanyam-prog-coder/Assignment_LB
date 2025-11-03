#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : MultiDigit
// Description  : Accept No. from user & return Multiplication of all digit
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int MultiDigit(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);

    printf("%d",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
// 
// Input : 2395     Output : 270
// Input : -1018    Output : 8
//
//////////////////////////////////////////////////////////////////////////////////////
