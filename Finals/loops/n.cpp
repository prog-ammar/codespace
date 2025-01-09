#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        cout<<"*";
        for(int j=0;j<n;j++)
        {
            if(j==i)
            {
                if(i==0 || i==n-1)
                cout<<" ";
                else
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"*";
        cout<<"\n";
    }
}