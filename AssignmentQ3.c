#include<stdio.h>

////////////////////////////////////////////////////////////////
// Function     : Factorial
// Description  : Complexity Calculation Factorial of number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int icnt = 0;
    int iFrequncy = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt<= iNo ; icnt++)
    {
        iFrequncy = iFrequncy * icnt;
    }
    return iFrequncy;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////
// Input : 5    Output : 120
// Input : -4   Output : 24
////////////////////////////////////////////////////////////////