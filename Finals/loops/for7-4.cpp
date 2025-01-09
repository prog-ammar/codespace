#include<iostream>
using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n/2||i==n-1)
        {
            for(int j=0;j<n;j++)
            cout<<"*";
        }
        else
        {
          cout<<"*";
          for(int spc=0;spc<n-2;spc++)
          cout<<" ";
          cout<<"*";
        }
        cout<<"\n";
    }
}