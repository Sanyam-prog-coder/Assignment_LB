#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : StrCpyRev
// Description  : Reverse Given String and Copy int into Another string
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *str, char *dest)
{
    int length = 0, iCnt = 0;

    while(str[length] != 0)
    {
        length++;
    }

    for(iCnt = 0; iCnt < length; iCnt++)
    {
        dest[iCnt] = str[length - iCnt - 1];
    }

    dest[length] = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr, Brr);

    printf("%s\n",Brr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
//
//  Input : Marvellous Python   Output : nohtyP suollevraM
//
////////////////////////////////////////////////////////////////////////////////////////