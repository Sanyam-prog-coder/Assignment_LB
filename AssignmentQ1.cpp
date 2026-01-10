#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function : Addition
// Description : Summation of two number Generic coading
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
///////////////////////////////////////////////////////////////////////

template<class T>
T Addition(T no1, T no2)
{
    T Sum = 0;

    Sum = no1 + no2;

    return Sum;
}
int main()
{
    int iRet = Addition(10,20);
    cout<<"Addition of Two Integer is : "<<iRet<<"\n";

    float fRet = Addition(10.2f, 20.5f);
    cout<<"Addition of Two Float is : "<<fRet<<"\n";

    return 0;
}
/*
Input : 10,20       Output : Addition of Two Integer is : 30
Input : 10.2,20.5   Output : Addition of Two Float is : 30.7
*/