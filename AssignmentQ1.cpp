#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function :   Multiply
// Description  :   Multiplya two Generic data 
// Auther   : Sanyam BhupendraKumar Ravne
// Date :   08-01-2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 + no2;
    return ans;
}
int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication of two Integers data : "<<iRet<<"\n";

    float fRet = Multiply(10.0f, 20.4f);
    cout<<"Multiplication of two Float data : "<<fRet<<"\n";

    return 0;
}

/*
Input   : 10, 20        Output  : Multiplication of two Integers data : 30
Input   : 10.0f, 20.4f  Output  : Multiplication of two Float data : 30.4
*/