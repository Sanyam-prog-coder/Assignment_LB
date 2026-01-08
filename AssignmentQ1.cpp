#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
// Function : Display
// Description : Print the Given value of size
// Auther   : Sanyam Bhupendrakumar Ravne
// Date : 06/01/2026
//
/////////////////////////////////////////////////////////////////////

template<class T>
void Display(T Value, int Size)
{
    int iCnt;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}
/*
M       M       M       M       M       M       M
11      11      11
3.7     3.7     3.7     3.7     3.7     3.7
*/