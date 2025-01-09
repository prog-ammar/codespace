#include<iostream>
using namespace std;

int main()
{
    int number,n,rev,remainder;
    cout<<"Enter An Number : ";
    cin>>number;
    n=number;
    while(n>0)
    {
        remainder=n%10;
        n=n/10;
        rev=(rev*10)+remainder;
    }
    if(rev==number)
    {
        cout<<number<<" is a palindrome";
    }
    else{
        cout<<number<<" is not a palindrome";
    }

}