#include<iostream>

using namespace std;

const int col=3;
bool checkidentity(int arr[][col],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
             if(arr[i][j]!=1)
             {
                return false;
             }
            }
            else
            {
                if(arr[i][j]!=0)
                {
                    return false;
                }
            }
            
        }
    }
    return true;
}


int main()
{
    int r,c;
    cout<<"Enter rows and cloumns : ";
    cin>>r>>c;
    int arr[r][col];
    cout<<"Enter Elements : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool ans=checkidentity(arr,r,c);
    if(ans)
    {
        cout<<"Matrix is identity \n";
    }
    else
    {
        cout<<"Matrix is not identity \n";
    }
}