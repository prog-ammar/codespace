#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    int* p;
    int* arr=new int [n];
    p=arr;
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    int t;
    cout<<"Enter elements you want to add : ";
    cin>>t;
    int* newarr=new int [n+t];
    for(int i=0;i<n;i++)
    {
        newarr[i]=arr[i];
    }
    for(int i=n;i<n+t;i++)
    {
        cin>>newarr[i];
    }
    p=newarr;
    for(int i=0;i<n+t;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}