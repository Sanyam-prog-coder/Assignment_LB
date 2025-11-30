#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CheckChar
// Description  : Accepet String & character from user and Check the Ch is Present or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 29/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool CheckChar(char *str, char Ch)
{
    while(*str != '\0')
    {
        if(*str == Ch)
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[20];
    char cValue = 0;
    bool bRet = false;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",&cValue);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character is not found");
    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : Marvellous   Input : e   Output : Character Found
// Input : Marvellous   Input : m   Output : Character is not Found
//
///////////////////////////////////////////////////////////////////////////////////////////////