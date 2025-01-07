#include<iostream>

using namespace std;

int merging(int* arr1,int* arr2,int* arr3,int n1,int n2)
{
  int l=n1;
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        bool found=false;
        for(int j=0;j<n1;j++)
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
        return l;
}

void printarr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sorting(int* p,int size)
{
    for(int i=1;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
           if(p[j-1]>p[j])
           {
            swap(p[j-1],p[j]);
           }
        }
    }
}



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
    int size=merging(arr1,arr2,arr3,n1,n2);
    cout<<"After Merging : "<<endl;
    printarr(arr3,size);
    sorting(arr3,size);
    cout<<"After Sorting : "<<endl;
    printarr(arr3,size);
}