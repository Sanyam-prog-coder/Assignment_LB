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

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<i<<"\t";
        i++;
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
// Input : 5    Output : 1  2   3   4   5
//
////////////////////////////////////////////////////////