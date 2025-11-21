#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Description  : accept number of rows and column from user and display
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 21/11/2025
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        char Ch;
        if(i % 2 != 0)
        {
            Ch = 'A';
        }
        else
        {
            Ch = 'a';
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",Ch);
            Ch++;
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Coloumn : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 4    Input : 4
// Output : 
/*
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/
//
////////////////////////////////////////////////////////////////////////