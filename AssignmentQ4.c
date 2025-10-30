#include<stdio.h>

///////////////////////////////////////////////////////////////////////
// Function     : CheckNumberType
// Description  : Check +tive, -tive, 0
// Auther       : Sanyam BhupendraKumar ravne
// Date         : 30/10/2025
///////////////////////////////////////////////////////////////////////

void CheckNumberType(int Num)
{
    if(Num > 0)
    {
        printf("%d is a Positive Number.\n", Num);
    }
    else if(Num < 0)
    {
        printf("%d is a Negative Number,\n", Num);
    }
    else
    {
        printf("The Number is Zero,\n");
    }
}
int main()
{
    int Number;

    printf("Enter Number : ");
    scanf("%d",&Number);

    CheckNumberType(Number);
    return 0;
}
///////////////////////////////////////////////////////////////////////
// Input : -6   Output : -tive
// Input :  8   Output : +tive
// Input :  0   Output : 0
///////////////////////////////////////////////////////////////////////
