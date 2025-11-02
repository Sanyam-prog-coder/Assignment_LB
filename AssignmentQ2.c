#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Count_Factors
// Description  : Count total factors of a Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
//////////////////////////////////////////////////////////////////////////

int Count_Factors(int number)
{
    int i = 0, Count = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int number;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%d\n",Count_Factors(number));

    return 0;
}
//////////////////////////////////////////////////////////////////////////
// 
// Input : 15   Output : 4
// Input : -15  Output : 0
//
//////////////////////////////////////////////////////////////////////////
