#include<stdio.h>

///////////////////////////////////////////////////////////////////
// Function Name :  DisplayEvenFactor
// Description :    Accept one no. from user & print even factors
//                  of that No.
// Auther :         Sanyam Bhupendrakumar Ravne 
// Date :           28/10/2025
///////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;     
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))   
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////////
// Input : 36   Output : 2  4   6   12  18 
///////////////////////////////////////////////////////////////////