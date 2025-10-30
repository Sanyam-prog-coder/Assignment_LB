#include <stdio.h>

////////////////////////////////////////////////////////////////
// Function     :   CheckEvenOdd
// Description  :   check Even & Odd Number
// Auther       :   Sanyam BhupendraKumar Ravne
// Date         :   30/10/2025
////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is Even.\n", num);
    }
    else
    {
        printf("%d is Odd.\n", num);
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}
////////////////////////////////////////////////////////////////
// Input : 12   Output : Even
// Input : 5    Output : Odd
////////////////////////////////////////////////////////////////