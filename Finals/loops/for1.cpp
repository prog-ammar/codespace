#include<iostream>
using namespace std;

int main()
{
    int n,prod=1;
    for(n=1;n<=15;n=n+2)
    {
        prod*=n;
    }
    cout<<prod;
}