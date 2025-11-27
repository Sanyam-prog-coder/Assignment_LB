#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : ChkAlpha
// Description  : Accept Ch from user and Check it Alphabet or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////


typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character");
    }
    else 
    {
        printf("It Is not a Chracter");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////
// 
// Input : F    Output : It is Character
// Input : &    Output : It is Not Character
//
////////////////////////////////////////////////////////////////////////