#include<iostream>

using namespace std;

const int col=100;

bool is_symmetric(int p[][col],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(p[i][j]!=p[j][i])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    int r,c;
    cout<<"Enter no of Rows and Cols : ";
    cin>>r>>c;
    int arr[r][col];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool l=is_symmetric(arr,r,c);
    if(l)
    {
        cout<<"Given Matrix is symmetric "<<endl;
    }
    else
    {
        cout<<"Given Matrix is not symmetric "<<endl;
    }
}