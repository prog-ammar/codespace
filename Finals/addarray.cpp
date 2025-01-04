#include<iostream>
using namespace std;

void printarray(int arr1[], int n);

void insert(int arr[],int num, int index,int n)
{
  int arr1[n+1];
  for(int i=0;i<n;i++)
  {
    if(i==index)
    {
        arr1[i]=num;
        arr1[i+1]=arr[i];
    }
    else if(index<i)
    {
        arr1[i+1]=arr[i];
    }
    else
    {
        arr1[i]=arr[i];
    }
  }
  printarray(arr1,n+1);
}

void printarray(int arr1[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter No of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    insert(arr,7,2,n);
}