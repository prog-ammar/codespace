#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and columns : ";
    cin>>r>>c;
    int arr[r][c];
    int transpose[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Transpose of an matrix is : \n";
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    // for(int i=0;i<c;i++)
    // {
    //     for(int j=0;j<r;j++)
    //     {
    //         cout<<transpose[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}