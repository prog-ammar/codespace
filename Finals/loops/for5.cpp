#include<iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter an number for factorial (1-10) :";
    cin>>n;
    for(int i=n;i>0;i--)
    {
      fact*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}