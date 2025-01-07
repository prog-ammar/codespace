#include<iostream>

using namespace std;

void merging2sortedarray(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int l=0;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr3[l]=arr1[i];
            l++;
            i++;
        }
        else
        {
            arr3[l]=arr2[j];
            l++;
            j++;
        }
    }
    while(i<n1)
    {
        arr3[l]=arr1[i];
            l++;
            i++;
    }
    while(j<n2)
    {
        arr3[l]=arr2[j];
            l++;
            j++;
    }
}


int main()
{
    int n1,n2;
    cout<<"Enter no of elements in 1st array : ";
    cin>>n1;
    cout<<"Enter no of elements in 2nd array : ";
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"Enter elements of 1st array : ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter elements of 2nd array : ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    merging2sortedarray(arr1,arr2,arr3,n1,n2);
    for(int i=0;i<(n1+n2);i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}