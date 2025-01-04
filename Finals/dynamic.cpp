#include<iostream>
using namespace std;

void arrayappend(int arr[],int size,int n);
void printarr(int arr[],int size);
int *p[1];

void arrayappend(int arr[],int size,int n)
{
 int *arr1=new int[size+1];
 *p=arr1;
 for(int i=0; i<size+1; i++)
 {
    if(i!=size)
    arr1[i]=arr[i];
    else
    arr1[i]=n;
 }
 delete [] arr;
 printarr(arr1,size+1);
}

void printarr(int arr[],int size)
{
    for(int i=0; i<size ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=5;
    int *arr=new int[5];
    *p=arr;
    cout<<"Enter Elemets : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a;
    char ans;
    do 
    {
    cout<<"Enter element You Want to Append : ";
    cin>>a;
    arrayappend(*p,n,a);
    n++;
    cout<<"\nDo You Want To Append More Elements (y/n): ";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
}