#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
// Function : Search 
// Descritpion  : To search the Given Element from Array
// Auther : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
/////////////////////////////////////////////////////////////////

template<class T>
bool Search(T *Arr, int iSize, T Value)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int Arr[] = {10,20,60,50,40,20,30};
    int iSize = 6;
    
    bool bRet = Search(Arr,iSize, 20);
    if(bRet == true)
    {
        cout<<"Element Found\n";
    }
    else
    {
        cout<<"Element Not Found\n";
    }

    return 0;
}
/*
Input : 20      Output : Element Found
Input : 99      Output : Element not Found
*/