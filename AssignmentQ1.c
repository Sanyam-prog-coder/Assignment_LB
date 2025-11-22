#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
// Function     : Pattern
// Description  : Accept No. of Rows & coloumn from user and display
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 22/11/2025
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCOl)
{
    int i = 0, j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCOl; j++)
        {
            printf("%d\t",iCount);
            iCount++;

            if(iCount == 10)
            {
                iCount = 1;
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
    5   6   7   8
    9   1   2   3   
    4   5   6   7
*/
//
/////////////////////////////////////////////////////////////////////////