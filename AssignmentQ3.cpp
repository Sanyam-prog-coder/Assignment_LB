#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function : Division
// Description : Division of two Number Generic
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
///////////////////////////////////////////////////////////////////////

template<class T>
T Division(T no1, T no2)
{
    T Div = 0;

    Div = no1 / no2;

    return Div;
}

int main()
{
    int iRet = Division(20,5);
    cout<<"Division of two Integer is : "<<iRet<<"\n";

    double dRet = Division(20.5644,5.1564);
    cout<<"Division of two Double is : "<<dRet<<"\n";

    return 0;
}
/*
Input : 20,5            Output : Division of two Integer is : 4
input : 20.5644,5.1564  Output : Division of two Double is : 3.98813
*/