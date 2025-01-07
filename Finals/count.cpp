#include<iostream>

using namespace std;


void count(int* p,int n)
{
     int wdp [n];
     int ind=0;
     for(int i=0;i<n;i++)
     {
        bool dup=false;
        int x=p[i];
        for(int j=i+1;j<n;j++)
        {
            if(x==p[j])
            {
                dup=true;
                break;
            }
        }
        if(!dup)
        {
            wdp[ind]=x;
            ind++;
        }
     }
    int target;
    for(int l=0;l<ind;l++)
    {
        int no=0;
        target=wdp[l];
        for(int i=0;i<n;i++)
    {
        if(p[i]==target)
        {
            no++;
        }
    }
    cout<<wdp[l]<<" occurs "<<no<<"\n";
    }
}




int main()
{
    int n;
    cout<<"enter no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count(arr,n);
}