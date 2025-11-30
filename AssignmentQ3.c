#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : StrCpyCap
// Description  : Capital the Given String And copy it into Another string
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    char Arr[30] = "marvellous python 2";
    char Brr[30];

    StrCpyCap(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : marvellous python 2 Output : MARVELLOUS PYTHON 2
//
////////////////////////////////////////////////////////////////////////////////////////