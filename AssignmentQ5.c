#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Description  : Accept No. of Rows & coloumn from user and display
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 22/11/2025
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf("\t");
        }
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Coloumn : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
//
// Input : Row 4    Column 4
/*
    Output :
    1   2   3   4
        2   3   4
            3   4
                4
*/
//
/////////////////////////////////////////////////////////////////////////