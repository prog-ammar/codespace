#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter No of Rows : ";
    cin>>rows;
    for(int i=rows;i>0;i--)
    {
        for(int k=0;k<rows-i;k++)
        {
            cout<<" ";
        }
           for(int j=i-1;j>0;j--)
        {
            cout<<"*";
        }
           for(int j=i;j>0;j--)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}