#include<iostream>
using namespace std;

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
    int target;
    bool is_found=false;
    int l=0;
    int arr1[n];
    cout<<"Enter Element you Want to Delete : ";
    cin>>target;
    for(int i=0; i<n; i++)
    {
        if(target!=arr[i])
        {
          arr1[l]=arr[i];
          l++;
        }
        else
        {
         is_found=true;
        }
    }
    if(!is_found)
    {
        cout<<"Alert : "<<target<<" Not Present";
        exit(0);
    }
    for(int i=0;i<n-(n-l);i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\nAlert : "<<target<<" is Delted";

}