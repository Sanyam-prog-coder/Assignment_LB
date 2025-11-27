#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : CheckSmall
// Description  : Accept Ch from user and Check it is Capital or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////


typedef int BOOL;

BOOL CheckSmall(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else 
    {
        printf("It Is not a Small case Chracter");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
// 
// Input : g    Output : It is Small case Character
// Input : D    Output : It is Not Small case Character
//
////////////////////////////////////////////////////////////////////////