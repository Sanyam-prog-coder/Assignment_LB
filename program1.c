#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
// Function     : Whitespace
// Description  : Accept string and count whitespaces using recursion
// Author       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
/////////////////////////////////////////////////////////////////

int Whitespace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        Whitespace(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[64];

    printf("Enter String : ");
    fgets(arr, sizeof(arr), stdin);

    iRet = Whitespace(arr);

    printf("Whitespaces are %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input  : Hel LO Wor LD
// Output : 3
//
/////////////////////////////////////////////////////////////////
