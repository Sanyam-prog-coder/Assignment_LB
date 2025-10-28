#include<stdio.h>

////////////////////////////////////////////////////////////
// Function Name :  PrintEven
// Description :    Accept one no. from user & print no. 
//                  of even number
// Auther :         Sanyam Bhupendrakumar Ravne 
// Date :           28/10/2025
////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int iEven = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iEven);
        iEven = iEven + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
////////////////////////////////////////////////////////////
// Input : 7
// Output : 2 4 6 8 10 12 14
////////////////////////////////////////////////////////////