#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
// Function : Minimum
// Descritpion  : To find the Minimum Element from Array
// Auther : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
/////////////////////////////////////////////////////////////////

template<class T>
T Minimum(T *Arr, int iSize)
{
    int i = 0;
    T Min = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}
int main()
{
    int Arr[] = {10,20,30,40,05,60};
    int iSize = 6;

    cout<<"Smallest Element is : "<<Minimum(Arr,iSize);

    return 0;
}
/*
Smallest Element is : 5
*/