#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
// FUnction :   CheckSorted
// Description  : To check the weather array is Sorted or Not in Generic
// Auther : Sanyam BhupendraKumar Ravne
// Date : 09-01-2026
//
/////////////////////////////////////////////////////////////////////////

template<class T>
bool CheckSorted(T *Arr, int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size - 1; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    int iSize = 5;

    if(CheckSorted(Arr, iSize))
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is Not Sorted";
    }

    return 0;
}
/*
Array is Sorted
*/