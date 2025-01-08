#include<iostream>

using namespace std;

const int col=100;

void sumrow(int p[][col],int r,int c)
{
    int sum[r];
    for(int i=0;i<r;i++)
    {
        sum[i]=0;
        for(int j=0;j<c;j++)
        {
            sum[i]+=p[i][j];
        }
    }
    int largest=sum[0];
    int index=0;
    for(int i=1;i<r;i++)
    {
      if(largest<sum[i])
      {
        largest=sum[i];
        index=i;
      }
    }
    cout<<"row "<<index+1<<" has largest sum "<<largest<<endl;
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
    sumrow(arr,r,c);
}