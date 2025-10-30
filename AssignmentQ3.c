#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
// Function     :   NonFact
// Description  :   Accept No. from user & display all its Non Factor
// Auther       :   Sanyam Bhupendrakumar Ravne
// Date         :   30/10/2025    
////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Input : 12   Output : 5 7 8 9 10 11
// Input : 13   Output : 2 3 4 5 6 7 8 9 10 11 12
// Input : 10   Output : 3 4 6 7 8 9
////////////////////////////////////////////////////////////////////////////