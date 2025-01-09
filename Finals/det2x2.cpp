#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter elements in 2x2 matrix : \n";
    int arr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    int det=1;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i==j)
            {
                swap(arr[i][j],arr[2-i-1][2-j-1]);
            }
            else if(i==2-j-1)
            {
                arr[i][j]=-arr[i][j];
            }
        }
    }
    int prod1=1;int prod2=1;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i==j)
            {
                prod1*=arr[i][j];
            }
            else if(i==2-j-1)
            {
                prod2*=arr[i][j];
            }
        }
    }
    det=prod1-prod2;
    cout<<"Determinant of matrix is : "<<det<<endl;
}