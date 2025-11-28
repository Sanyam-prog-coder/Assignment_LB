#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
//
// Function     : CheckSpeccial
// Description  : Accept ch from user and Check  
//                wheather it is special symbol or not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
//////////////////////////////////////////////////////

bool CheckSpecial(char Ch)
{
    if(Ch == '!' || Ch == '@' || Ch == '#' || Ch == '$' ||
       Ch == '%' || Ch == '^' || Ch == '&' || Ch == '*')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a Special Character");
    }
    else
    {
        printf("It is Not a Special Character");
    }

    return 0;
}
//////////////////////////////////////////////////////
//
// Input : #    Output : It is a Special Character
// Input : s    Output : It is Not a Special Character
//
//////////////////////////////////////////////////////