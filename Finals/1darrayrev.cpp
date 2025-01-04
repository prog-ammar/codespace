#include<iostream>

using namespace std;

void rev(int* p, int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
      temp=*(p+i);
      *(p+i)=*(p+n-i-1);
      *(p+n-i-1)=temp;
    }
}

void printarray(int*p ,int n)
{
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr,n);
    printarray(arr,n);
}