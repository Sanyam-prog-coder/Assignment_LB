#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : is_Divisible_by_Five
// Description  : Check if number is Divisible by 5
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

bool is_Divisible_by_Five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("%s\n", is_Divisible_by_Five(number) ? "Yes" : "No");

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 25   OUtput : YES
// Input : 12   OUtput : NO
//
//////////////////////////////////////////////////////////////////////////////////////