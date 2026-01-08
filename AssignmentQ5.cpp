#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
//
// Function : Minimum 
// Description : To Find Minimum from Given Array Generic
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 08-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Minimum(T *arr, int Size)
{
    T Min = arr[0];
    int i = 0;

    for(i = 1; i < Size; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.8f, 3.7f, 9.8f, 8.7f};

    int iRet = Minimum(arr, 5);
    cout<<"Maximum of Integer : "<<iRet<<"\n";

    float fRet = Minimum(brr, 4);
    cout<<"Maximum of Float : "<<fRet<<"\n";

    return 0;
}
/*
Input   : 10,20,30,40,50    Output  : Minimum of Integer : 10
Input   : 10.8,3.7,9.8,8.7  Output  : Minimum of Float : 3.7
*/