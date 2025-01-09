#include<iostream>
using namespace std;

int main()
{
    int n,number,rev,rem;
    cout<<"Enter an Number : ";
    cin>>n;
    number=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(rev==number)
    cout<<number<<" is palindrome";
    else
    cout<<number<<" is not a palindrome";
}