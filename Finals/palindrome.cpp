#include<iostream>

using namespace std;


bool palindrome(int* p, int* p1,int n)
{
    for(int i=0;i<n;i++)
    {
        if(p1[i]!=p[i])
        {
           return false;
        }
    }
    return true;
}


int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr1[n];
    for(int i=n;i>0;i--)
    {
        arr1[n-i]=arr[i-1];
    }
    bool rep=palindrome(arr1,arr1,n);
    if(rep)
    {
        cout<<"Array is palindrome \n";
    }
    else
    {
        cout<<"Array is not palindrome \n";
    }
}