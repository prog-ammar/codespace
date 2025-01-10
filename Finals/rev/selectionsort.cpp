#include<iostream>

using namespace std;

const int col=100;

void selectionon1d( int arr[],int n)
{
    int min_index;
    for(int i=0;i<n;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            swap(arr[min_index],arr[i]);
        }
    }
}

void selectionon2d(int arr[][col],int r,int c)
{
    int min_index;
  for(int i=0;i<r;i++)
  {
    min_index=i;
    for(int j=0;j<c;j++)
    {
      for(int k=i+1;k<r;k++)
      {
        if(arr[min_index][j]>arr[k][j])
        {
            min_index=k;
        }
      }
      if(min_index!=i)
      {
        swap(arr[min_index][j],arr[i][j]);
      }
    }
  }

  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        min_index=j;
        for(int k=j+1;k<c;k++)
        {
            if(arr[i][min_index]>arr[i][k])
            {
                min_index=k;
            }
        }
        if(min_index!=j)
        {
            swap(arr[i][j],arr[i][min_index]);
        }
    }
  }
}


int main()
{
    int choice;
    cout<<"Enter 1 for 1d array\nEnter 2 for 2d array : ";
    cin>>choice;
    if(choice==1)
    {
        int n;
        cout<<"Enter no of rows : ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selectionon1d(arr,n);
        cout<<"Sorted 1d array : ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else if(choice==2)
    {
        int r,c;
        cout<<"Enter rows and columns : ";
        cin>>r>>c;
        int arr[r][col];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        selectionon2d(arr,r,c);
        cout<<"Sorted 2d array : \n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}