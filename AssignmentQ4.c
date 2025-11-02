#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function     : Sum_of_Even_Factors
// Description  : Sum of Even Factors(exclude the number itself)
// Auther       : Sanyam BhupendraKumar Ravne 
// Date         : 02/11/2025
//
/////////////////////////////////////////////////////////////////////////////

int Sum_of_Even_Factors(int number)
{
    int i,Sum = 0;

    for(i =1; i < number; i++)
    {
        if((number % i == 0) && (i % 2 == 0))
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}

int main()
{
    int number;

    printf("Enter number :");
    scanf("%d",&number);

    printf("%d\n", Sum_of_Even_Factors(number));

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Input : 12   Output : 12
// Input : 6    Output : 2
//
/////////////////////////////////////////////////////////////////////////////