#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
// Function : SumOdd
// Descritpion  : To calculate the Summation Odd Elements
// Auther : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
/////////////////////////////////////////////////////////////////

template<class T>
T SumOdd(T *Arr, int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            Sum = Sum + Arr[i];
        }
    }
    return Sum;
}

int main()
{
    int Arr[] = {10,21,15,55,50,60};
    int iSize = 6;

    int iRet = SumOdd(Arr,iSize);
    cout<<"Sum of Odd Elements of An Array is : "<<iRet<<"\n";

    return 0;
}
/*
Sum of Even Elements of An Array is : 91
*/