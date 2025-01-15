#include<iostream>

using namespace std;

const int col=100;

void bubblesort(int p[][col],int row,int column)
{
    for(int i=0;i<row-1;i++)
    {
        for(int j=0;j<column;j++)
        {
            for(int k=0;k<row-i-1;k++)
            {
                if(p[k][j]>p[k+1][j])
                {
                    swap(p[k+1][j],p[k][j]);
                }
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column-1;j++)
        {
            for(int k=0;k<column-j-1;k++)
            {
                if(p[i][k]>p[i][k+1])
                {
                    swap(p[i][k+1],p[i][k]);
                }
            }
        }
    }
}

void binarysearch(int p[][col],int r,int c,int target)
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
   int right=l-1;
   int mid;
   bool found=false;
   while(left<=right)
   {
    mid=(left+right)/2;
    if(arr[mid]==target)
    {
        cout<<"Element Present at row-index : "<<mid/r<<" and col-index : "<<mid%c<<endl;
        found=true;
        break;
    }
    else if(arr[mid]>target)
    {
        right=mid-1;
    }
    else if(arr[mid]<target)
    {
        left=mid+1;
    }
   }
   if(found==false)
   {
    cout<<"Element Not Found "<<endl;
   }
}


void printarr(int p[][col],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int r,c;
    cout<<"Enter no of Rows : ";
    cin>>r;
    cout<<"Enter no of Columns : ";
    cin>>c;
    int arr[r][col];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    bubblesort(arr,r,c);
    printarr(arr,r,c);
    int t;
    cout<<"Enter Target : ";
    cin>>t;
    binarysearch(arr,r,c,t);
}