#include<iostream>

using namespace std;

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
    int* p1=arr;
    int* p2=(arr+n-1);
    for(int i=0;i<n/2;i++)
    {
        swap(*(p1),*(p2));
        p1++;
        p2--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}