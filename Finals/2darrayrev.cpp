#include<iostream>

using namespace std;
const int col=100;

void matrixrev(int p[][col],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            swap(p[i][j],p[i][c-j-1]);
        }
    }
    for(int i=0;i<r/2;i++)
    {
        for(int j=0;j<c;j++)
        {
            swap(p[i][j],p[r-i-1][j]);
        }
    }
}

void printarr(int p[][col],int r,int c)
{
    cout<<"Reversed Matrix : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
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
    matrixrev(arr,r,c);
    printarr(arr,r,c);
}