#include<stdio.h>

//////////////////////////////////////////////////////////////////
// Function     : FactorialDiff
// Description  : Diff betn Even & Odd factorial
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
//////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int icnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt ++)
    {
        if(icnt % 2 == 0)
        {
            iEvenFact = iEvenFact * icnt;
        }
        else
        {
            iOddFact = iOddFact * icnt;
        }
    }
    iDiff = iEvenFact - iOddFact;

    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Diffrence is %d",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////
// Input : 5    Output : -7
// Input : 10   Output : 2895
//////////////////////////////////////////////////////////////////