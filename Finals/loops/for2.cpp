#include<iostream>
using namespace std;

int main()
{
    int prod=1;
    for(int i=1;i<=25;i++)
    {
        if(i%5==0)
        {
            prod*=i;
        }
    }
    cout<<prod;
}