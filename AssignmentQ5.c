#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
// Function Name :  CheckEven
// Description :    Accept no. from user and Check number 
//                  is Even or Odd
// Auther :         Sanyam BhupendraKumar Ravne
// Date :           27/10/2025
////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;   
    }
    else
    {
        return false;  
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}
////////////////////////////////////////////////////////////
// Input : 12   Output : Even
// Input : 15   Output : Odd
// Input : -17   Output : Odd
// Input : -18  Output : Even
////////////////////////////////////////////////////////////