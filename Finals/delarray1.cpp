#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Element you Want to Delete : ";
    cin>>target;
    for(int i=0; i<n; i++)
    {
        if(target==arr[i])
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
        }

    }
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}