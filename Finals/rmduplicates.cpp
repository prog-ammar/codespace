#include<iostream>

using namespace std;

void printarr(int* p,int n);


int rmdup(int* p,int n)
{
    int arr[n];
    int l=0;
    for(int i=0;i<n;i++)
    {
        int temp=*(p+i);
        bool dup=false;
        for(int j=i+1;j<n;j++)
        {
            if(temp==*(p+j))
            {
              dup=true;
              break;
            }
        }
        if(!dup)
        {
            p[l]=*(p+i);
            l++;
        }
    }
    return l;
}


void printarr(int* p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int size;
    cout<<"Enter no of elements : ";
    cin>>size;
    int arr[size];
    int* p=arr; 
    for(int i=0;i<size;i++)
    {
      cin>>*(p+i);
    }
    int ans=rmdup(p,size);
    printarr(p,ans);
}