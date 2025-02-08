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
      
      int findElement(int element)
      {
        for(int i=0;i<size;i++)
        {
          if(ptr[i]==element)
          {
            return i;
          }
        }
        return -1;
      }
      
      void deleteElement(int element)
      {
        bool found=false;
        for(int i=0;i<size;i++)
        {
          if(ptr[i]==element)
          {
            found=true;
            for(int j=i;j<size-1;j++)
            {
              ptr[j]=ptr[j+1];
            }
          }
        }
        if(found)
        {
          size--;
        }
      }

      void deleteAtIndex(int index)
      {
        if(index>=0 && index<size)
        {
          for(int i=index;i<size-1;i++)
          {
            ptr[i]=ptr[i+1];
          }
          size--;
        }
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
  a.insert(34);
  a.insert(43);
  a.insert(56);
  int index=a.findElement(43);
  if(index!=-1)
  {
    cout<<"Element Found at index : "<<index<<endl;
  }
  else
  {
    cout<<"Element Not Found "<<endl;
  }
  a.deleteElement(43);
  a.print();
}