#include<iostream>

using namespace std;

void binarysearch(int *p,int n,int target);
void selectionsort(int* p,int n);
void bubblesort(int *p,int n);
void printarr(int* p,int n);

void bubblesort(int* p,int n)
{
    int temp;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
        if(p[j]>p[j+1])
        {
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
        }
    }
}

void selectionsort(int* p,int n)
{
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(p[min_index]>p[j])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            swap(p[min_index],p[i]);
        }
    }
}

void printarr(int* p,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void binarysearch(int* p,int n,int target)
{
    int left=0;
    int right=n-1;
    int index;
    bool found=false;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(p[mid]==target)
        {
          found=true;
          index=mid;
          break;
        }
        else if(target>p[mid])
        {
            left=mid+1;
        }
        else if(target<p[mid])
        {
            right=mid-1;
        }
    }
    if(found)
    {
        cout<<target<<" found at index "<<index<<endl;
    }
    else
    {
        cout<<target<<" not found in array"<<endl;
    }
}


int main()
{
    int size;
    cout<<"Enter no of Elements : ";
    cin>>size;
    int arr[size];
    int* p =arr;
    for(int i=0;i<size;i++)
    {
        cin>>*(p+i);
    }
    do
    {
    int choice;
    cout<<"Press 1 for Bubble Sort\nPress 2 for Selection Sort\nEnter Choice : ";
    cin>>choice;
    if(choice==1)
    {
      bubblesort(p,size);
      printarr(p,size);
      int t;
      cout<<"Enter Element you want to find : ";
      cin>>t;
      binarysearch(p,size,t);
      break;
    }
    else if(choice==2)
    {
      selectionsort(p,size);
      printarr(p,size);
      int t;
      cout<<"Enter Element you want to find : ";
      cin>>t;
      binarysearch(p,size,t);
      break;
    }
    else
    {
        cout<<"Enter wrong choice !";
        continue;
    }
    }while (1);
    
}