#include<iostream>
using namespace std;


void rightshift(int arr[],int n)
{
    int last=arr[n-1];
   for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    cout<<"right shifted by 1 \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void leftshift(int arr[],int n)
{
    int first=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    cout<<"left shifted by 1 \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void leftshift(int arr[],int n,int k)
{
    
    for(int j=0;j<k;j++)
    {
        int first=arr[0];
       for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
        arr[n-1]=first;
    }
    
    cout<<"left shifted by 1 \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rightshift(int arr[],int n,int k)
{
    for(int i=0; i<k;i++)
    {
        int last=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    cout<<"right shifted by 1 \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"enter no of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    rightshift(arr,n,2);
    
}