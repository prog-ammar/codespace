#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i || j==n-i-1)cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
}
}