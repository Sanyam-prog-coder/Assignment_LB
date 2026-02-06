#include<iostream>
using namespace std;

////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Display Pattern in Recursive 
// Auther       ; Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
////////////////////////////////////////////////////////

void Display(int iNO)
{
    static int i = 1;

    if(i <= iNO)
    {
        cout<<"*\t";
        i++;
        Display(iNO);
    }    
}

int main()
{
    int No = 0;

    cout<<"Enter Number : ";
    cin>>No;

    Display(No);

    return 0;
}
////////////////////////////////////////////////////////
//
// Input : 5    Output : *  *   *   *   *
//
////////////////////////////////////////////////////////