#include<iostream>

using namespace std;

const int col=3;

void printarr(int p[][col],int r,int c);

void rowsoritng(int p[][col],int r,int c)
{
    int min_index;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             min_index=j;
             for(int k=j+1;k<c;k++)
             {
                if(p[i][min_index]>p[i][k])
                {
                    min_index=k;
                }
             }
             if(min_index!=j)
             {
               swap(p[i][min_index],p[i][j]);
             }
        }
    }
}

void colsorting(int p[][col],int r,int c)
{
    int min_index;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           min_index=i;
           for(int k=i+1;k<r;k++)
           {
             if(p[min_index][j]>p[k][j])
             {
                min_index=k;
             }
           }
           if(min_index!=i)
           {
            swap(p[min_index][j],p[i][j]);
           }
        }
    }
}

void printarr(int p[][col],int r,int c)
{
    cout<<"\nSorted Matrix : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}



int main()
{
    int r,c;
    cout<<"Enter no of rows and cols : ";
    cin>>r>>c;
    int arr[r][col];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    rowsoritng(arr,r,c);
    colsorting(arr,r,c);
    printarr(arr,r,c);

}