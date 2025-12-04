#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
//  Function    : Display
//  Description : Display the pattern by Recurtion
//  Auther      : Sanyam BhupendraKumar Ravne
//  Date        : 04/12/2025
//
/////////////////////////////////////////////////////////////

void Display()
{
    static int iCnt = 5;
    auto i = 5;

    if( iCnt >= 1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
        i--;
        Display();
    }
}
int main()
{
    Display();

    return 0;
}
/////////////////////////////////////////////////////////////
//
// Input :    Output :  5   4   3   2   1  
//
/////////////////////////////////////////////////////////////