#include <stdio.h>

/////////////////////////////////////////////////////////////////////
// Function     : MultipleDisplay
// Description  : Accept N and print first 5 Multiples of N
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 31/10/2025
/////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt * iNo );
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////
// Input : 4    Output : 4 8 12 16 20
/////////////////////////////////////////////////////////////////////