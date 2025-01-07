#include<iostream>

using namespace std;

void second(int p[],int n)
{
    int largest=p[0];
    int seclr=p[0];
    for(int i=1;i<n;i++)
    {
        if(largest<p[i])
        {
            largest=p[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(seclr<p[i])
        {
            if(p[i]!=largest)
            {
              seclr=p[i];
            }
        }
    }
    cout<<largest<<" "<<seclr<<"\n";
}

int main()
{
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    second(arr,n);
}