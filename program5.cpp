#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Diplay the Pattern Recursive a b c d e
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char ch = 'a';

    if(ch < 'a' + iNo )
    {
        cout<<ch<<"\t";
        ch++;
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
// Input : 5    Output : a  b   c   d   e 
//
//////////////////////////////////////////////////////////// 