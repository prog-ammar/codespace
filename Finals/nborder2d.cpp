#include<iostream>

using namespace std;


const int col=100;

int sumofnbd(int p[][col],int r,int c)
{
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=0 && i!=r-1 && j!=0 && j!=c-1)
            {
                sum+=p[i][j];
            }
           
       }
    }
    return sum;
}

int main()
{
    int r,c;
    cout<<"Enter rows and cols : ";
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
    int s=sumofnbd(arr,r,c);
    cout<<"Sum of Non Border Elements : "<<s<<endl;
}