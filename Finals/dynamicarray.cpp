#include<iostream>

using namespace std;

int main()
{
int *ptr =new int[5];
cout<<"Enter elements : ";
for(int i=0;i<5;i++)
{
    cin>>*(ptr+i);//you can also do ptr[i]
}
cout<<"In reverse order : ";
for(int i=4;i>=0;i--)
{
    cout<<*(ptr+i)<<" ";//you can also do ptr[i]
}
cout<<endl;
int n;
cout<<"Enter no of elements you want to add : ";
cin>>n;
int* newptr=new int[5+n];
for(int i=0;i<5;i++)
{
    newptr[i]=ptr[i];
}
delete [] ptr;
cout<<"Enter new elements : ";
for(int i=5;i<5+n;i++)
{
    cin>>newptr[i];
}
cout<<"New array \n";
for(int i=0;i<5+n;i++)
{
    cout<<newptr[i]<<" ";
}
cout<<endl;
int x;
cout<<"Enter element you want to delete : ";
cin>>x;
int* nptr=new int[4+n];
bool found=false;
for(int i=0;i<5+n;i++)
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
for(int i=0;i<4+n;i++)
{
    cout<<nptr[i]<<" ";
}
}
else
{
    for(int i=0;i<5+n;i++)
    {
        cout<<newptr[i]<<" ";
    }
}
delete [] newptr;
delete [] nptr;
cout<<endl;
}