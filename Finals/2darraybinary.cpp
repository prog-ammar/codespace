#include<iostream>

using namespace std;

const int col=100;

void binary2d(int p[][col],int r,int c,int target)
{
    int arr[r*c];
    int l=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[l]=p[i][j];
            l++;
        }
    }
    int left=0;
    int right=l;
    int mid;
    bool found=false;
    int index;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
          found=true;
          index=mid;
          break;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
    }
    if(found)
    {
        cout<<"Element found at "<<(index-1)/r<<" "<<(index+1)/c<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}


int main()
{
    int r,c;
    cout<<"Enter rows and cols : ";
    cin>>r>>c;
    int arr[r][col];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter a number you want to search : ";
    cin>>target;
    binary2d(arr,r,c,target);
}