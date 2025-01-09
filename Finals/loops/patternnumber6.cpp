#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter No of Rows : ";
    cin>>rows;
    for(int i=rows;i>0;i--)
    {
        for(int j=i;j>rows-1;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        for(int l=0;l<i+1;l++)
        {
            if(l!=0)
            {
                cout<<"*";
            }
        }
       cout<<endl;
    }
}