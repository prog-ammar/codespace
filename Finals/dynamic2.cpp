#include<iostream>
#include<algorithm>

using namespace std;
void print(int* p,int &size);

void append(int* p,int &size,int e)
{
   size++;
   int arr[size];
   copy(p,p+size-1,arr);
   p=arr;
   arr[size-1]=e;
   print(p,size);
}

void print(int* p,int &size)
{
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void deleted(int* p,int &size,int e)
{
    size--;
   for(int i=e;i<size;i++)
   {
     p[i]=p[i+1];
   }
   print(p,size);
}








int main()
{
    int size;
    cout<<"Enter no of Elements : ";
    cin>>size;
    int arr[size];
    int* p=arr;
    cout<<"Enter Elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    while(1)
    {
        int choice;
        cout<<"1 for Add an Element\n2 for Delete an Element\n3 For Exit\nEnter Choice : ";
        cin>>choice;
        if(choice==1)
        {
            int x;
            cout<<"Enter element you want to enter : ";
            cin>>x;
            append(p,size,x);
        }
        else if(choice==2)
        {
            int target;
            cout<<"Enter index of element you want to delete : ";
            cin>>target;
            deleted(p,size,target);
        }
        else if(choice==3)
        {
            break;
        }
        else
        {
           cout<<"Wrong Choice !";
           continue;
        }
    }
}