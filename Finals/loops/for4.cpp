#include<iostream>
using namespace std;

int main()
{
    int n,n1=1,n2=1,fibonacci;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      if(i==1)
      {
       fibonacci=n1;
      }
      else if(i==2)
      {
        fibonacci=n2;
      }
      else
      {
       fibonacci=n1+n2;
       n1=n2;
       n2=fibonacci;
      }
      cout<<fibonacci;
    }
}