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
    static char iCnt = 'a';

    if( iCnt <= 'f')
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
// Input :    Output :  a   b   c   d   e   f 
//
/////////////////////////////////////////////////////////////