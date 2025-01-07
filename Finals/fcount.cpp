#include<iostream>

using namespace std;

int fcount(int* p,int n,int target)
{
    int no=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]==target)
        {
            no++;
        }
    }
    return no;
}


int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int ans=fcount(arr,n,target);
    cout<<target<<" occurs in array "<<ans<<" times";
}