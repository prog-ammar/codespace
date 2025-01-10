#include<iostream>

using namespace std;

int* append(int* p,int n,int t)
{
    int* newarr=new int[n+1];
    for(int i=0;i<n;i++)
    {
        newarr[i]=p[i];
    }
    newarr[n]=t;
    delete [] p;
    return newarr;
}

void printarr(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter No of Elements : ";
    cin>>n;
    int *p=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int t;
    cout<<"Enter Element you want to append : ";
    cin>>t;
    p=append(p,n,t);
    printarr(p,n+1);
}