#include<iostream>
using namespace std;

void func(int* p,int n)
{
    cout<<"Reversed Array : ";
    for(int i=0;i<n/2;i++)
    {
        swap(*(p+i),*(p+n-i-1));
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter array size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    func(arr,size);
}