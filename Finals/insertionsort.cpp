#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n && j>0;j--)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}