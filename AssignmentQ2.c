#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : ChkCapital
// Description  : Accept Ch from user and Check it is Capital or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////


typedef int BOOL;

BOOL CheckCapital(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character");
    }
    else 
    {
        printf("It Is not a Capital Chracter");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
// 
// Input : F    Output : It is Capital Character
// Input : d    Output : It is Not Capital Character
//
////////////////////////////////////////////////////////////////////////