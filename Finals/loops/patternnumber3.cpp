#include<iostream>
using namespace std;

int main()
{
	int n,l=1;
	cout<<"Enter No of Rows : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
		        cout<<l<<" ";
			l++;
		}
		cout<<endl;
	}
	return 0;
}
