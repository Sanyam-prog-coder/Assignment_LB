#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : StrCpyToggle
// Description  : Toggle the Given String And copy it into Another string
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *dest = *str - 32;
        }
        else
        {
            *dest = *str;
        }
        str++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "MarvellouS PythON 2";
    char Brr[30];

    StrCpyToggle(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : MarvellouS PythON 2 Output : mARVELLOUs pYTHon 2
//
////////////////////////////////////////////////////////////////////////////////////////