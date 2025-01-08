#include<iostream>

using namespace std;

int main()
{
    int r1,c1;
    cout<<"Enter rows and columns : ";
    cin>>r1>>c1;
    int arr1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
          cin>>arr1[i][j];
        }
    }
    int r2,c2;
    cout<<"Enter rows and columns : ";
    cin>>r2>>c2;
    int arr2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
          cin>>arr2[i][j];
        }
    }
    int ans[r1][c2];
    int l=0;
    if(c1==r2)
    {
        
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            ans[i][j]=0;
            for(int k=0;k<r2;k++)
            {
              ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
      }
      cout<<"Answer after multiplication : \n";
      for(int i=0;i<r1;i++)
      {
        for(int j=0;j<c2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
      }
    else
    {
        cout<<"In matrix Multiplication no of columns of first matrix must be equal to no of rows in second matrix \n";
    }
}