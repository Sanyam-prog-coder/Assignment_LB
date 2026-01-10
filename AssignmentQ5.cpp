#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function : 
// Description :
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
///////////////////////////////////////////////////////////////////////

template<class T>
T Maximum(T a, T b, T c, T d)
{
    T Max = a;

    if(b > Max)
    {
        Max = b;
    }
    if(c > Max)
    {
        Max = c;
    }
    if(d > Max)
    {
        Max = d;
    }
    return Max;    
}

int main()
{
    int iRet = Maximum(10,20,5,15);
    cout<<"Maximum Integer is : "<<iRet<<"\n";

    float fRet = Maximum(10.5f,20.5f,30.6f,07.4f);
    cout<<"Maximum Float value is : "<<fRet<<"\n";

    return 0;
}
/*
Input : 10,20,5,15              Output : Maximum Integer is : 20
Input : 10.5f,20.5f,30.6f,07.4f Output : Maximum Float value is : 30.6
*/