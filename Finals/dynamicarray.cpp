#include<iostream>

using namespace std;

int main()
{
    int s;
    cout<<"Enter no of elements : ";
    cin>>s;
int *ptr =new int[s];
cout<<"Enter elements : ";
for(int i=0;i<s;i++)
{
    cin>>*(ptr+i);//you can also do ptr[i]
}
cout<<"In reverse order : ";
for(int i=s;i>=0;i--)
{
    cout<<*(ptr+i)<<" ";//you can also do ptr[i]
}
cout<<endl;
int n;
cout<<"Enter no of elements you want to add : ";
cin>>n;
int* newptr=new int[s+n];
for(int i=0;i<s;i++)
{
    newptr[i]=ptr[i];
}
delete [] ptr;
cout<<"Enter new elements : ";
for(int i=s;i<s+n;i++)
{
    cin>>newptr[i];
}
cout<<"New array \n";
for(int i=0;i<s+n;i++)
{
    cout<<newptr[i]<<" ";
}
cout<<endl;
int x;
cout<<"Enter element you want to delete : ";
cin>>x;
int* nptr=new int[s+n-1];
bool found=false;
for(int i=0;i<s+n;i++)
{
  if(x==newptr[i])
  {
    found=true;
  }
  else
  {
    if(found)
    {
        nptr[i-1]=newptr[i];
    }
    else
    {
        nptr[i]=newptr[i];
    }
  }
}

if(found==true)
{
for(int i=0;i<s+n-1;i++)
{
    cout<<nptr[i]<<" ";
}
}
else
{
    for(int i=0;i<s+n;i++)
    {
        cout<<newptr[i]<<" ";
    }
}
delete [] newptr;
delete [] nptr;
cout<<endl;
}