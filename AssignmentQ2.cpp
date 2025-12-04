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
    static int iCnt = 1;
    auto i = 1;

    if( iCnt <= 5)
    {
        cout<<iCnt<<"\t";
        iCnt++;
        i++;
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
// Input :    Output : 1    2   3   4   5   
//
/////////////////////////////////////////////////////////////