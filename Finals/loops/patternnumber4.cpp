#include<iostream>
using namespace std;
 
int main()
{
	int n;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int k=0;k<n-i;k++)
			cout<<" ";
		for(int j=i;j>0;j--)
			cout<<n-i+1;
		cout<<endl;
	}
	return 0;
}

