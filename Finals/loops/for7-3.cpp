#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int spaces=0;spaces<i;spaces++)
        cout<<" ";
        cout<<"*";
        for(int spaces=0;spaces<2*(n-i-1);spaces++)
        cout<<" ";
        if(i!=n-1)
        cout<<"*";
        cout<<"\n";
    }
}