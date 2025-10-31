#include<stdio.h>

//////////////////////////////////////////////////////////////////
// Function     : DollerToINR
// Description  : convert USD into INR
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
//////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 88;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD $: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR %d\n", iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////
// Input : $90      Output : 7920
// Input : $ 1      Output : 88
//////////////////////////////////////////////////////////////////