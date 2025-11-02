#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//
// Function     : print_odd_number
// Description  : print all Odd Number upto N
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
/////////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int i;

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_odd_numbers(limit);
    return 0;
}
/////////////////////////////////////////////////////////////////////////
// 
// Input : 12   Output : 1 3 5 7 9 11
//
/////////////////////////////////////////////////////////////////////////