#include<iostream>
using namespace std;

////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Display Reverse Pattern in Recursive 
// Auther       ; Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = iNo;

    if(i >= 1)
    {
        cout<<i<<"\t";
        i--;
        Display(iNo);
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
// Input : 5    Output : 5  4   3   2   1   
//
////////////////////////////////////////////////////////