#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int Size)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = AddN(arr, 5);
    cout<<"Addition of Integer : "<<iRet<<"\n";

    float fRet = AddN(brr, 4);
    cout<<"Addition of Float : "<<fRet<<"\n";

    return 0;
}
/*
Input   : 10,20,30,40,50    Output  : Addition of Integer : 150
Input   : 10.0,3.7,9.8,8.7  Output  : Addition of Float : 32.2
*/