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
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
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
// Input : Row 5    Column 5
/*
    Output :
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
*/
//
/////////////////////////////////////////////////////////////////////////