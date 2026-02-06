#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Diplay the Reverse Pattern Recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
////////////////////////////////////////////////////////////

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
    Display(5);

    return 0;
}
////////////////////////////////////////////////////////////
//
// Input : 5    Output : 5  4   3   2   1     
//
//////////////////////////////////////////////////////////// 