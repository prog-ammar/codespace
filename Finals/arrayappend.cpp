#include<iostream>

using namespace std;
int* p;

void printarr(int* p,int n);
int append(int* arr,int n)
{
    int t;
    cout<<"Enter elements you want to add : ";
    cin>>t;
    int size=n+t;
    int* newarr=new int [size];
    for(int i=0;i<n;i++)
    {
        newarr[i]=arr[i];
    }
    for(int i=n;i<size;i++)
    {
        cin>>newarr[i];
    }
    p=newarr;
    return size;
}

int deletenum(int* arr,int n,int t)
{
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
                found=true;
            }
        }
    }
    if(found)
    {
        cout<<t<<" is deleted"<<endl;;
        return n-1;
    }
    else
    {
        cout<<t<<"Not present in Array"<<endl;
        return n;
    }
}

int delindex(int* arr,int n,int index)
{
    if(index>=0 && index<n)
    {
       for(int i=index;i<n-1;i++)
       {
        arr[i]=arr[i+1];
       }
       return n-1;
    }
    else
    {
        cout<<"Wrong Index"<<endl;
        return -1;
    }
    
}

int delmulti(int* arr,int n,int t)
{
    int l=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]!=t)
      {
        arr[l]=arr[i];
        l++;
      }
    }
    return l;
}

void noofcounts(int* arr,int n)
{
    bool visited[n];
    for(int i=0;i<n;i++)
    {
      visited[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i])
        {
          continue;
        }
        else
        {
            int count=1;
        for(int j=i+1;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
            count++;
            visited[j]=true;
          }
        }
        cout<<arr[i]<<" Occurs this "<<count<<" times"<<endl;
    }
}
}

int deldup(int* arr,int n)
{
    int l=0;
    int* newarr=new int[n];
    for(int i=0;i<n;i++)
    {
        bool found=false;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
              if(arr[i]==arr[j])
              {
                found=true;
                break;
              }
            }
        }
        if(!found)
        {
          newarr[l]=arr[i];
          l++;
        }
    }
    p=newarr;
    return l;
}

void printarr(int* p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter no of Elements : ";
    cin>>n;
    int* arr=new int [n];
    p=arr;
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
    }
    do
    {
      int choice;
      cout<<"\n\n1.Append An Array\n2.Delete an Element\n3.Delete using Index\n4.Delete if exists multiple of given\n5.Delete all duplicates\n6.No of Counts of All Nums\n7.Eixt\nEnter Choice : ";
      cin>>choice;
      switch (choice)
      {
      case 1:
        n=append(p,n);
        printarr(p,n);
        break;
      case 2:
        int t;
        cout<<"Enter Element You Want to Delete : ";
        cin>>t;
        n=deletenum(p,n,t);
        printarr(p,n);
        break;
      case 3:
        int i;
        cout<<"Enter index : ";
        cin>>i;
        n=delindex(p,n,i);
        printarr(p,n);
        break;
      case 4:
        int j;
        cout<<"Enter Element : ";
        cin>>j;
        n=delmulti(p,n,j);
        printarr(p,n);
        break;
    case 5:
        n=deldup(p,n);
        printarr(p,n);
        break;
    case 6:
        noofcounts(p,n);
        break;
    case 7:
        break;
      default:
        cout<<"Wrong Choice\n";
      }
    } while (1);
    
}