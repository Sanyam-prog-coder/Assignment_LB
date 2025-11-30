#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : StrCpyX
// Description  : Remove the Whilte space from given String and copied it into another
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvel lous Pyth on";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : Marvel lous Pyth on   Output : MarvellousPython
//
////////////////////////////////////////////////////////////////////////////////////////