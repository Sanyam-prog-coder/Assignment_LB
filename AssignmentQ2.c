#include <stdio.h>

////////////////////////////////////////////////////////////////
// Function     :   FindMax
// Description  :   Find Maximum of two Number
// Auther       :   Sanyam BhupendraKumar Ravne
// Date         :   30/10/2025
////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, result;

    printf("Enter First numbers: ");
    scanf("%d", &num1);

    printf("Enter Second numbers: ");
    scanf("%d", &num2);

    result = FindMax(num1, num2);
    printf("Maximum is: %d\n", result);

    return 0;
}
////////////////////////////////////////////////////////////////
// Input : 12   Input : 17  Output : 17
// Input : -8   Input : -1  Output : -1
////////////////////////////////////////////////////////////////