#include<iostream>

using namespace std;


int smallest2nd(int arr[],int n)
{
    int small=arr[0],small2nd=arr[1];
    for(int i=1;i<n;i++)
    {
       if(small>arr[i])
       {
         small2nd=small;
         small=arr[i];
       }
       if(small!=arr[i])
       {
         if(arr[i]<small2nd)
         {
            small2nd=arr[i];
         }
       }
    }
    return small2nd;
}


int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=smallest2nd(arr,n);
    cout<<ans<<endl;
}