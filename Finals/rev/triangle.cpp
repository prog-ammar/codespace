#include<iostream>

using namespace std;

void triangle(int n,char ch)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
          cout<<ch;
        }

        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    char c;
    cout<<"Enter Character : ";
    cin>>c;
    triangle(n,c);
}