#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
//
// Function : Maximum 
// Description : To Find Maximum from Given Array Generic
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 08-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Maximum(T *arr, int Size)
{
    T Max = arr[0];
    int i = 0;

    for(i = 1; i < Size; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.8f, 3.7f, 9.8f, 8.7f};

    int iRet = Maximum(arr, 5);
    cout<<"Maximum of Integer : "<<iRet<<"\n";

    float fRet = Maximum(brr, 4);
    cout<<"Maximum of Float : "<<fRet<<"\n";

    return 0;
}
/*
Input   : 10,20,30,40,50    Output  : Maximum of Integer : 50
Input   : 10.8,3.7,9.8,8.7  Output  : Maximum of Float : 10.8
*/