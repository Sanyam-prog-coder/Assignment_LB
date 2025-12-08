#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Display the pattern by Recurtion
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 08/12/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char iCnt = 1;
    static char c = 'a';

    if(iCnt > iNo)
    {
        return;
    }

    printf("%c\t",c);
    iCnt++;
    c++;

    Display(iNo);
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : 5         Output : a  b   c   d   e
//
////////////////////////////////////////////////////////////////////