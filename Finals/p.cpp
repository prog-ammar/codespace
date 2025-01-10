#include<iostream>

using namespace std;

int* change(int *p)
{
    int x=8;
    p=&x;
    return p;
}


int main()
{
    int arr=7;
    int* p=&arr;
    cout<<*p;
    p=change(p);
    cout<<*p;
}