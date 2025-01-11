#include<iostream>
using namespace std;

void merge(int *arr,int left,int mid,int right)
{
//Store left and right index of an array
 int half1=mid-left+1;
 int half2=right-mid;

//Temp ARRAYS
 int L[half1];
 int R[half2];

//Store left side of array
 for(int i=0;i<half1;i++)
 {
    L[i]=arr[left+i];
 }

//Store Right Side of Array
 for(int j=0;j<half2;j++)
 {
    R[j]=arr[mid+1+j];
 }

 int i=0,j=0,k=left;

//Check Each Elements of Both Array and store from Smaller to Largest
 while(i<half1 && j<half2)
 {
    if(L[i] <= R[j])
    {
        arr[k]=L[i];
        i++;
    }
    else{
        arr[k]=R[j];
        j++;
    }
    k++;
 }

//If Any Element Remaning or extra in Left Array
 while(i<half1)
 {
    arr[k]=L[i];
    i++;
    k++;
 }

//If any Element Remaning or extra in Right Array
  while(j<half2)
 {
    arr[k]=R[j];
    j++;
    k++;
 }
}

void mergesort(int *arr,int left,int right)
{
    if(left>=right)
    {
        return ;
    }
    int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

void print(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main()
{
    int arr[5]={7,6,5,8,3};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    mergesort(arr,0,size-1);
    print(arr,size);  
}