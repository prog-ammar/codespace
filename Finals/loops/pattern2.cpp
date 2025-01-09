#include<iostream>
using namespace std;

int main()
{ 
	int n;
	cout<<"Enter No of Rows : ";
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}
