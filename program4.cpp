#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Diplay the Pattern Recursive A B C D E
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 06-Feb-2026
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char ch = 'A';

    if(ch < 'A' + iNo )
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
// Input : 5    Output : A  B   C   D   E
//
//////////////////////////////////////////////////////////// 