#include<iostream>
using namespace std;

int main()
{
    int n,rev,remainder;
    cout<<"Enter an Number : ";
    cin>>n;
    while(n>0)
    {
        remainder=n%10;
        cout<<remainder;
        n=n /10;
    }
}