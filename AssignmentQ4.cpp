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
    static char iCnt = 'A';

    if( iCnt <= 'F')
    {
        cout<<iCnt<<"\t";
        iCnt++;
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
// Input :    Output :  A   B   C   D   E   F   
//
/////////////////////////////////////////////////////////////