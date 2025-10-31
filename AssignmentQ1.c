#include<stdio.h>

////////////////////////////////////////////////////////////////
// Function     : Number
// Description  : Complexity Calculation
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Smaller\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Larger\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////
// Input : 45       Output : Smaller
// Input : 69       Output : Medium
// Input : 108      Output : Larger
// Input : -45      Output : Smaller
//////////////////////////////////////////////////////////////// 