#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : ChkCapital
// Description  : Accept Ch from user and Check it is Digit or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////


typedef int BOOL;

BOOL CheckDigit(char ch)
{
    while(ch != '\0')
    {
        if((ch >= '0') && (ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else 
    {
        printf("It Is not a Digit");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
// 
// Input : 8    Output : It is Digit
// Input : d    Output : It is Not Digit
//
////////////////////////////////////////////////////////////////////////