#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Accept Ch from user and display ASCII value in 
//                  Decimal, octal and HexaDecimal format
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
///////////////////////////////////////////////////////////////////////

void Display(char Ch)
{
    printf("Decimal value : %d\n",Ch);
    printf("Octal Value : %o\n",Ch);
    printf("HexaDecimal value : %x\n",Ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
///////////////////////////////////////////////////////////////////////
//
// Input : J    
// Output : Decimal value: 74,Octal Value: 112,HexaDecimal value: 4a
//
///////////////////////////////////////////////////////////////////////