#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    int gcd;
    int max,min;
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter 2nd NUmber : ";
    cin>>n2;
    if(n1>n2)
    {
        max=n1;
        min=n2;
    }
    else
    {
        max=n2;
        min=n1;
    }
    while(min!=0)
    {
        int temp=min;
        min=max%min;
        max=temp;
    }
    cout<<"Gcd is "<<max;
}