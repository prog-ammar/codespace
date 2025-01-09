#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int spaces=0;spaces<n-i-1;spaces++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i==n/2)
        {
            for(int j=0;j<2*i-1;j++)
            cout<<"*";
        }
        else
        {
            for(int j=0;j<2*i-1;j++)
            cout<<" ";
        }
        if(i!=0)
        cout<<"*";
        cout<<endl;
    }
}