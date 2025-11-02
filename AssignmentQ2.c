#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//
// Function     : print_even_number
// Description  : print all Even Number upto N
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
/////////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int i;

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 == 0)
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

    print_even_numbers(limit);
    return 0;
}
/////////////////////////////////////////////////////////////////////////
// 
// Input : 12   Output : 2 4 6 8 10 12
//
/////////////////////////////////////////////////////////////////////////