#include<iostream>

using namespace std;

template <typename T> //Function Template
T Max(T a, T b)
{
    return(a>b)?a:b;
}

template <typename Y>//Class Template

class MyArray
{
  private:
  Y* temp;
  Y* ptr;
  int size;

  public:

//   MyArray(): size(0),ptr=nullptr{}

  MyArray(Y arr[],int s)
  {
    ptr=new Y[s];
    size=s;
    for(int i=0;i<s;i++)
    {
        ptr[i]=arr[i];
    }
  }
  
  void print()
  {
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
  }

  void insert(Y element)
  {
    temp=new Y[size];
    for(int i=0;i<size;i++)
    {
       temp[i]=ptr[i];
    }
    size++;
    ptr=new Y[size];
    for(int i=0;i<size-1;i++)
    {
        ptr[i]=temp[i];
    }
    ptr[size-1]=element;
  }

  void deleteAtIndex(int index)
  {
    bool finded=false;
    for(int i=0;i<size;i++)
    {
        if(ptr[index]==ptr[i])
        {
            finded=true;
            for(int j=i;j<size;j++)
            {
                ptr[j]=ptr[j+1];
            }
        }
    }
    if(finded)
    {
        size--;
    }
  }  
};

int main()
{
  int arr[5]={1,2,3,4,5};
  MyArray<int> a(arr,5);
  a.print();
  a.insert(6);
  a.print();
  a.deleteAtIndex(3);
  a.print();
}