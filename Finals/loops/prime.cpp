#include<iostream>
using namespace std;

int main()
{
    int n;
    bool prime;
    cout<<"Enter An Number : ";
    cin>>n;
    if(n==0 || n==1)
    {
        prime=false;
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=false;
                break;
            }
            else
            {
                prime=true;
            }
        }
    }
    if(prime)
    {
        cout<<n<<" is prime Number";
    }
    else
    {
        cout<<n<<" is not an prime number";
    }
}