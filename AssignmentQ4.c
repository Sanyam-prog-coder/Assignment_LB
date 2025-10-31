#include<stdio.h>

//////////////////////////////////////////////////////////////////
// Function     : OddFactorial
// Description  : To find Odd Factorial of No.
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
//////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int icnt = 0;
    int iFrequancy = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt += 2)
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

    iRet = OddFactorial(iValue);

    printf("Even Factorial of Number is %d\n",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////
// Input : 5    Output : 15
// Input : -5   Output : 15
// Input : 10   Output : 945
//////////////////////////////////////////////////////////////////