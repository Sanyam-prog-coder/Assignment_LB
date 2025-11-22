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
    int iCount = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            iCount = 2;
        }
        else
        {
            iCount = 1;
        }

        for(j = 1; j <= iCOl; j++)
        {
            printf("%d\t",iCount);
            iCount+= 2;
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
    2   4   6   8   
    1   3   5   7
    2   4   6   8
    1   3   5   7
*/
//
/////////////////////////////////////////////////////////////////////////