#include<iostream>

using namespace std;


int main()
{
//  int x[7]={1,3,4,5,6,7,8};
//  int* ptr= x;
//  ptr+=3;
//  cout<<*ptr<<endl;


//  int arr[3]={4,5,6};
//  for(int i=0;i<3;i++)
//  {
//     cout<<*(arr+i)<<" ";
//  }
//  cout<<"\n";

// int arr[] = {1, 3, 5, 7};
//     int *ptr = arr + 1;
//     cout << ptr[0] << " " << *(arr + 3) << endl;

// int vals[] = {9, 18, 27, 36};
//     int *ptr = vals;
//     ptr += 2;
//     cout << *(ptr + 1) << " " << *(ptr - 2) << endl;

// int nums[] = {100, 200, 300};
//     int *ptr1 = &nums[0];
//     int *ptr2 = ptr1 + 1;
//     cout << *ptr1 << " " << *(ptr2 + 1) << endl;

// int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     cout << *ptr + 2 << endl;      // Statement 1
//     cout << *(ptr + 3) << endl;    // Statement 2
//     cout << *(ptr + 1) - 5 << endl; // Statement 3

// int x=9;
// int* ptr1 =&x;
// int** ptr2 =&ptr1;
// int*** ptr3 =&ptr2;
// cout<<&x<<" "<<*ptr1<<" "<<**ptr2<<" "<<***ptr3;


// char arr[]="Hi kesy ho";
// char* ptr=arr;
// cout<<ptr<<"\n";
// ptr+=3;
// cout<<*ptr<<"\n"; 
// cout<<ptr<<"\n";

// string arr[]={"ammar","ayesha"};
// string* ptr= arr;
// cout<<*ptr+" saleem"<<"\n";
// cout<<*(ptr+1)<<"\n";

// int arr[]={7,8,9};
// int* ptr=arr;
// ptr+=2;
// cout<<*ptr<<endl;


// int *ptr=new int;
// cout<<"Enter an value : ";
// cin>>*ptr;
// cout<<*ptr<<"\n";

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