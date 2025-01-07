#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and cloumns : ";
    cin>>r>>c;
    cout<<"Enter Elements : \n";
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    int diag1=0,diag2=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                diag1+=arr[i][j];
            }
            if(i==c-j-1)
            {
                diag2+=arr[i][j];
            }
        }
    }
    cout<<"Main diagonal sum : "<<diag1<<"\nSecondary diagonal sum : "<<diag2<<endl;
}