#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : FirstChar
// Description  : Accepet String & character from user and Return of First Occurance of Ch
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 29/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char Ch)
{
    int index = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            return index;
        }
        str++;
        index++;
    }
    return -1;
}

int main()
{
    char Arr[20];
    char cValue = 0;
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character Location is %d",iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : Marvellous Multi OS   Input : W   Output : Location -1
// Input : Marvellous Multi OS   Input : e   Output : location  4
//
///////////////////////////////////////////////////////////////////////////////////////////////