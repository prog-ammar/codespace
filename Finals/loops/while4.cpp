#include<iostream>
using namespace std;

int main()
{
    int n1,n2,lcm;
    cout<<"Enter 1st Number : ";
    cin>>n1;
    cout<<"Enter 2nd Number : ";
    cin>>n2;
    int max=(n1>n2)?n1:n2;
    while(true)
    {
        if(max%n1==0 && max%n2==0)
        {
            lcm=max;
            break;
        }
        else{
            max++;
        }
    }
    cout<<"The LCM is "<<lcm;
}
    