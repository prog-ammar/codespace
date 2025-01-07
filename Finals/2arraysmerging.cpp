#include<iostream>

using namespace std;


int main()
{
    int n1,n2;
    cout<<"Enter no of elements of first array : ";
    cin>>n1;
    cout<<"enter elements of 1st array : ";
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter no of elements of second array : ";
    cin>>n2;
    cout<<"enter elements of 1st array : ";
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    int l=n1;
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
        {
            bool found=false;
            for(int j=i+1;j<n1;j++)
            {
              if(arr2[i]==arr1[j])
              {
                found=true;
                break;
              }
            }
            if(!found)
            {
                arr3[l]=arr2[i];
                l++;
            }
        }
    for(int i=0;i<l;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}