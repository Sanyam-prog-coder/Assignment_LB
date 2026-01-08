#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//
// Function : Max
// Description  : to find Maximum of Generic data
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 08-01-2026
//
//////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T no1, T no2, T no3)
{
    T iMax;

    if((no1 >= no2) &&(no1 >= no3))
    {
        iMax = no1;
    }
    else if((no2 >= no1) && (no2 >= no3))
    {
        iMax = no2;
    }
    else
    {
        iMax = no3;
    }
}

int main()
{
    int iRet = Max(10,40,30);
    cout<<"Maximum Number is : "<<iRet<<"\n";

    return 0;
}
/*
Input   : 10,40,30  Output  : Maximum Number is : 40
*/