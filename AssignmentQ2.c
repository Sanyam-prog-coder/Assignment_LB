#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
// Function     :   FactRev
// Description  :   Accept No. from user & display in Decreasing order
// Auther       :   Sanyam Bhupendrakumar Ravne
// Date         :   30/10/2025    
////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
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

    FactRev(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Input :  12  Output : 6 4 3 2 1 
// Input :  13  Output : 1
////////////////////////////////////////////////////////////////////////////