#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
// FUnction :   SecondMax
// Description  :  To check Second Maximum Element Generic
// Auther : Sanyam BhupendraKumar Ravne
// Date : 09-01-2026
//
/////////////////////////////////////////////////////////////////////////

template<class T>
T SecondMax(T *Arr, int Size)
{
    T Max = Arr[0];
    T SecondMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            SecondMax = Max;
            Max = Arr[iCnt];
        }
        else if(Arr[iCnt] > SecondMax && Arr[iCnt] != Max)
        {
            SecondMax = Arr[iCnt];
        }
    }
    return SecondMax;
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    int iSize = 5;

    cout<<"Second Largest Element : "<<SecondMax(Arr,iSize);

    return 0;
}
/*
Second Largest Element : 40
*/