#include<iostream>

using namespace std;


int main()
{
 int x=7;
 void* ptr= &x;
 cout<<*ptr;
}