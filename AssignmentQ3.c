#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Sum_of_Factors
// Description  : Sum of all Factors of a Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
//////////////////////////////////////////////////////////////////////////

int Sum_of_Factors(int number)
{
    int i = 0, Sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("%d",Sum_of_Factors(number));

    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
// Input : 6    Output : 12
//
//////////////////////////////////////////////////////////////////////////