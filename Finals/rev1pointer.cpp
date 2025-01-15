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
    int* p=arr;
    //dumb way 
    for(int i=0;i<n/2;i++)               
    {
        swap(*p,*(p+n-2*i-1));
        p++;
    }
    //easy way
    // for(int i=0;i<n/2;i++)
    // {
    //     swap(*(p+i),*(p+n-i-1));
    // }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}