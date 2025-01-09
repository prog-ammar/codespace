#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        cout<<"*";
        for(int spaces=0;spaces<n;spaces++)
        {
        if(spaces==i)
        {
        if(i==0||i==n-1)
        cout<<" ";
        else
        cout<<"*";
        }
        else
        cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
}