#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
// Function Name :  Check
// Description :    Accept one number & check Diviorsible 5 or not
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           19/10/2025
//////////////////////////////////////////////////////////////////////

bool Check( int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////
//
// Input : 25    Output : True
// Input : 28    Output : False
//
///////////////////////////////////////////////////////////////////////