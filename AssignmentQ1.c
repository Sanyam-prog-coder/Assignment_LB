#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : DisplayASCII
// Descrioption : Display ASCII table 
// Auther       : Sanyam BHupendraKumar Ravne
// Date         : 28/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("----------------------------------------------------------\n");
    printf("  Dec\tHex\tOct\tSymbol\n");
    printf("----------------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)
        {
            printf("  %3d\t%02X\t%03o\t%c\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf("  %3d\t%02X\t%03o\t.\n", iCnt, iCnt, iCnt);
        }
    }

    printf("----------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////