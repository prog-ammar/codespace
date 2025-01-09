#include<iostream>
using namespace std;
int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int spc=0;spc<i+1;spc++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int spc=0;spc<2*(n-i-1)-1;spc++)
        {
            cout<<" ";
        }
        if(i!=n-1)
        cout<<"*";
        cout<<"\n";
    }
}