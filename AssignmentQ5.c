#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
// Function     : Sum_Even_number
// Description  : Find Sum of First N Even Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
/////////////////////////////////////////////////////////////////////////

int Sum_Even_number(int limit)
{
    int i, Sum = 0;

    for(i = 1; i <= limit; i++)
    {
        if(i % 2 == 0)
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}
int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d",&limit);

    printf("%d\n", Sum_Even_number(limit));

    return 0;
}
/////////////////////////////////////////////////////////////////////////
//
// Input : 5    Output : 6
//
/////////////////////////////////////////////////////////////////////////