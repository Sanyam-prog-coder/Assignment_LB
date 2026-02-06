#include<iostream>
using namespace std;

//////////////////////////////////////////////////
//
// Function     : Display
// Description  : Diplay the Pattern Recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
//////////////////////////////////////////////////

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
    Display(5);

    return 0;
}
//////////////////////////////////////////////////
//
// Input : 5    Output : 1  2   3   4   5   
//
////////////////////////////////////////////////// 