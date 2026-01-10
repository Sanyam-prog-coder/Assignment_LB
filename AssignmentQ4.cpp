#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
// Function : Reverse
// Descritpion  : To Reverse the Array 
// Auther : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
/////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T *Arr, int iSize)
{
    int Start = 0;
    int End = iSize - 1;
    T temp;

    while(Start < End)
    {
        temp = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = temp;

        Start++;
        End--;
    }
}

int main()
{
    int Arr[] = {10,20,30,42,55,60};
    int iSize = 6;

    Reverse(Arr, iSize);
    cout<<"Array After Reverse : ";
    for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<" ";
    }

    return 0;
}
/*
Array After Reverse : 60,55,42,30,20,10
*/