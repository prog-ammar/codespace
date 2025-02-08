#include<iostream>

using namespace std;

template <typename datatype>

class myVector
{
    private:
    datatype* ptr;
    datatype* temp;
    int size;

    public:
    myVector(): ptr(nullptr),temp(nullptr),size(0) {}

    void insert(int element)
    {
      size++;
      if(size==1)
      {
        ptr=new datatype[size];
        ptr[size-1]=element;
      }
      else
      {
        temp=new datatype[size-1];
        for(int i=0;i<size-1;i++)
        {
            temp[i]=ptr[i];
        }
        ptr=new datatype[size];
        for(int i=0;i<size-1;i++)
        {
            ptr[i]=temp[i];
        } 
        ptr[size-1]=element;
      }
    }  
      void print ()
      {
        for(int i=0;i<size;i++)
        {
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
      }

      ~myVector()
      {
        delete [] ptr;
        delete [] temp;
      }
};

int main()
{
  myVector<int> a;
  a.insert(1);
  a.insert(2);
  a.insert(3);
  a.print();
}