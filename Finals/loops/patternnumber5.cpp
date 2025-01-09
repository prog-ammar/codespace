#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter No of Rows : ";
	cin>>n;
	char ch='a';
	for(int i=n;i>0;i--)
        {
		for(int k=0;k<n-i;k++)
			cout<<" ";
		for(int j=i;j>0;j--)
		{
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}

