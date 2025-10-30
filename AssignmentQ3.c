#include <stdio.h>

//////////////////////////////////////////////////////////////////////
// Function     : CheckLeapYear
// Description  : Check Leap Year
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/10/2025
//////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year.\n", year);
    }
}

int main()
{
    int yr;

    printf("Enter a year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}
//////////////////////////////////////////////////////////////////////
// Input : 2002     Output : is not Leap Year
// Input : 2020     Output : is a Leap year
//////////////////////////////////////////////////////////////////////