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
        for(j = 1; j <= iCol; j++)
        {
            // Print full first or last row
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            // Print first or last column
            else if(j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }
            // Print main diagonal
            else if(i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");   // print blank
            }
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
    1   2       4
    1       3   4
    1   2   3   4
*/
//
/////////////////////////////////////////////////////////////////////////