#include <stdio.h>

/////////////////////////////////////////////////////////////////////
// Function     : OddDisplay
// Description  : Accept N from user & print all Odd No. upto N
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 31/10/2025
/////////////////////////////////////////////////////////////////////


void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////
// Input : 6    Output : 1 3 5
/////////////////////////////////////////////////////////////////////