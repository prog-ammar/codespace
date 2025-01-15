#include<iostream>

using namespace std;

void bubblesort(string* n,int* i,int* p,int l)
{
    for(int k=0;k<l-1;k++)
    {
        for(int j=0;j<l-k-1;j++)
        {
            if(i[j]>i[j+1])
            {
                swap(i[j],i[j+1]);
                swap(p[j],p[j+1]);
                swap(n[j],n[j+1]);
            }
        }
    }
}

int binarysearch(int* i,int n,int target)
{
   int left=0;
   int right=n-1;
   int mid;
   while(left<=right)
   {
    mid=(left+right)/2;
    cout<<mid;
    if(i[mid]==target)
    {
        return mid;
    }
    else if(i[mid]<target)
    {
        left=mid+1;
    }
    else if(i[mid]>target)
    {
        right=mid-1;
    }
   }
   return -1;
}

int main()
{
    int n;
    cout<<"Enter no of Persons : ";
    cin>>n;
    string* name=new string [n];
    int* id=new int [n];
    int* phone=new int [n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter Person-name : ";
        getline(cin,name[i]);
        cout<<"Enter id : ";
        cin>>id[i];
        cout<<"Enter phone no : ";
        cin>>phone[i];
    }
    int t;
    bubblesort(name,id,phone,n);
    cout<<"Enter id you want to find : ";
    cin>>t;
    int index=binarysearch(id,n,t);
    if(index==-1)
    {
        cout<<"id Not Found "<<endl;
    }
    else
    {
        cout<<"id found ";
        cout<<"\nName : "<<name[index]<<endl;
        cout<<"ID : "<<id[index]<<endl;
        cout<<"Phone No : "<<phone[index]<<endl;
    }
}