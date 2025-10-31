#include<stdio.h>

//////////////////////////////////////////////////////////////////
// Function     : EvenFactorial
// Description  : To find Even Factorial of No.
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
//////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int icnt = 0;
    int iFrequancy = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 2; icnt <= iNo; icnt += 2)
    {
        iFrequancy = iFrequancy * icnt;
    }
    return iFrequancy;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is %d\n",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////
// Input : 5    Output : 8
// Input : -5   Output : 8
// Input : 10   Output : 3840
//////////////////////////////////////////////////////////////////