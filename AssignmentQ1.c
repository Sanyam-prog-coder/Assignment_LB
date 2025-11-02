#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Print_Factors
// Description  : print all factors of a Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////
void print_factors(int number)
{
    if (number <= 0)
    {
        printf("Invalid input! Please enter a positive number.\n");
        return;
    }

    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 15   Output : 1 2 4 8 16
// Input :      Output : Invalid input! Please enter a positive number.
//
////////////////////////////////////////////////////////////////////////////////////////