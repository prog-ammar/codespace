#include<iostream>

using namespace std;

static const int col=3;

void rowrev(int arr[][col],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        swap(arr[i][j],arr[i][c-j-1]);
    }
}

void columnrev(int arr[][col],int r,int c)
{
    for(int i=0;i<r/2;i++)
    {
        for(int j=0;j<c;j++)
        swap(arr[i][j],arr[r-i-1][j]);
    }
}

//this method is wrong
// void colrowrev(int arr[][col],int r,int c)
// {
//     for(int i=0;i<r/2;i++)
//     {
//         for(int j=0;j<c/2;j++)
//         {
//             swap(arr[i][j],arr[r-i-1][c-j-1]);
//         }
//     }
// }

void pintarr(int arr[][col],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main()
{
    int r,c;
 cout<<"Enter rows and columns : ";
 cin>>r>>c;
 int arr[r][col];
 cout<<"Enter elements : \n";
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
 }
  rowrev(arr,r,c);
 columnrev(arr,r,c);
 pintarr(arr,r,c);
}