#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an Number : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum+=i;
        }
    }
    if(sum<n)
    {
        cout<<n<<" is deficit Number";
    }
    else if(sum>n)
    {
        cout<<n<<" is abundant Number";
    }
    else
    {
        cout<<n<<" is perfect Number ";
    }
}