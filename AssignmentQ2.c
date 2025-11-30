#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountChar
// Description  : Accepet String & character from user and Count the character
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 29/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char Ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue = 0;
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : Marvellous Multi OS   Input : M   Output : Frequency 2
// Input : Marvellous Multi OS   Input : k   Output : Frequency 0
//
///////////////////////////////////////////////////////////////////////////////////////////////