#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : StrCpySmall
// Description  : Small the Given String And copy it into Another string
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
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
    char Arr[30] = "MARVELLOUS PYTHON 2";
    char Brr[30];

    StrCpySmall(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : MARVELLOUS PYTHON 2 Output : marvellous python 2
//
////////////////////////////////////////////////////////////////////////////////////////