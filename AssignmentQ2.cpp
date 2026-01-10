#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function : Substraction
// Description : Substraction of Two Number Generic
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
///////////////////////////////////////////////////////////////////////

template<class T>
T Substraction(T no1, T no2)
{
    T Sub = 0;

    Sub = no1 - no2;

    return Sub;
}
int main()
{
    int iRet = Substraction(20,10);
    cout<<"Substraction of two Integer is : "<<iRet<<"\n";

    float fRet = Substraction(20.5f,10.5f);
    cout<<"Substraction of two Float is : "<<fRet<<"\n";
    
    return 0;
}
/*
Input : 20,10       Output : Substraction of two Integer is : 10
Input : 20.5,10.5   Output : Substraction of two Float is : 10
*/