///////////////////////////////////////////////////////////////
//
// Required Header File
//
///////////////////////////////////////////////////////////////


#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :  DivisonofTwoNumber
// Description :    It Use To Perform Division
// Input :          Int, Int
// Output :         Int
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           16/10/2025
///////////////////////////////////////////////////////////////

int Divide (
                int iNo1,   // First Input
                int iNo2    // Second Input
           )
{
    int iAns = 0;           // To Store the Result

    if(iNo2 == 0)           // Updater
    {
        return -1;
    }
    iAns = iNo1/iNo2;       // Buasiness Logic
    return iAns;
}   // End of Division

///////////////////////////////////////////////////////////////
//
//  Entry Point Function For The Application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;  // To Store Input
    int iRet = 0;                   // To Store The Result

    iRet = Divide(iValue1,iValue2); // Method Call

    printf("Divison is %d",iRet);

    return 0;
}   // End of Main

///////////////////////////////////////////////////////////////
//
//  Test Case
//
// Input : 15       Iutput : 5      Output : 3
//
///////////////////////////////////////////////////////////////