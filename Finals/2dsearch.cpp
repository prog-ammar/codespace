#include<iostream>

using namespace std;

const int col=100;

void linearsearch(int p[][col],int r,int c,int target)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(p[i][j]==target)
            {
                cout<<target<<" present at "<<i<<" row index and "<<j<<" column index ";
                return;
            }
        }
    }
    cout<<"Element not Present\n";
}


int main()
{
    int r,c;
    cout<<"Enter rows and columns : ";
    cin>>r>>c;
    int arr[r][col];
    cout<<"Enter Elements : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }
    int t;
    cout<<"\nEnter target you want to find : "<<endl;
    cin>>t;
    linearsearch(arr,r,c,t);
}