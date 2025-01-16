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

void leftshift(int* p,int n,int k)
{
    k=k%n;
    for(int i=0;i<k;i++)
    {
        int temp=p[0];
        for(int j=0;j<n;j++)
        {
            p[j]=p[j+1];
        }
        p[n-1]=temp;
    }
}

void rightshift(int* p,int n,int k)
{
    k=k%n;
    for(int i=0;i<k;i++)
    {
        int temp=p[n-1];
        for(int j=n-1;j>0;j--)
        {
           p[j]=p[j-1];
        }
        p[0]=temp;
    }
}

void bubblesort(int* arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionsort(int* arr,int n)
{
    int min_index;
    for(int i=0;i<n;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            swap(arr[min_index],arr[i]);
        }
    }
}

void insertionsort(int* arr,int n)
{
    for(int i=1;i<n;i++)
    {
       for(int j=i;j>0;j--)
       {
         if(arr[j-1]>arr[j])
         {
            swap(arr[j-1],arr[j]);
         }
       }
    }
}

int linearsearch(int* arr,int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int* arr,int n,int target)
{
    int left=0;
    int right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
    }
    return -1;
}

int insertatindex(int* arr,int n)
{
   int k,index;
   cout<<"Enter no of Elements : ";
   cin>>k;
   cout<<"Enter Index : ";
   cin>>index;
   int* temparr=new int[k];
   for(int i=0;i<k;i++)
   {
      cin>>temparr[i];
   }
   int* newarr=new int[n+k];
   int i=0;
   int l=0;
   bool inserted=false;

   //Works Fine
   for(int i=0;i<n;i++)
   {
     if(i==index && inserted==false)
     {
        for(int j=0;j<k;j++)
        {
            newarr[l]=temparr[j];
            l++;
        }
        inserted=true;
        i--;
     }
     else
     {
        newarr[l]=arr[i];
        l++;
     }
   }
//    Works Fine 
//    for(i=0;i<index;i++)
//    {
//         newarr[l]=arr[i];
//         l++;
//    }
//    for(i=0;i<k;i++)
//    {
//        newarr[l]=temparr[i];
//        l++;
//    }
//    for(i=index;i<n;i++)
//    {
//       newarr[l]=arr[i];
//       l++;
//    }
    p=newarr;
    return n+k;
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
    int choice;
    int t;
    int r;
    do
    {
      cout<<"\n\n1.Append An Array\n2.Delete an Element\n3.Delete using Index\n4.Delete if exists multiple of given\n5.Delete all duplicates\n6.No of Counts of All Nums\n7.Left Shift\n8.Right Shift\n9.Insert an array\n10.Selection Sort\n11.Insertion Sort\n12.Bubble Sort\n13.Linear Search\n14.Binary Search\n15.Exit\nEnter Choice : ";
      cin>>choice;
      switch (choice)
      {
      case 1:
        n=append(p,n);
        printarr(p,n);
        break;
      case 2:
        cout<<"Enter Element You Want to Delete : ";
        cin>>t;
        n=deletenum(p,n,t);
        printarr(p,n);
        break;
      case 3:
        cout<<"Enter index : ";
        cin>>t;
        n=delindex(p,n,t);
        printarr(p,n);
        break;
      case 4:
        cout<<"Enter Element : ";
        cin>>t;
        n=delmulti(p,n,t);
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
        cout<<"Enter key: ";
        cin>>t;
        leftshift(p,n,t);
        printarr(p,n);
        break;
    case 8:
        cout<<"Enter Key : ";
        cin>>t;
        rightshift(p,n,t);
        printarr(p,n);
        break;
    case 9:
        n=insertatindex(p,n);
        printarr(p,n);
        break;
    case 10:
        selectionsort(p,n);
        printarr(p,n);
        break;
    case 11:
        insertionsort(p,n);
        printarr(p,n);
        break;
    case 12:
        bubblesort(p,n);
        printarr(p,n);
        break;
    case 13:
        cout<<"Enter Target : ";
        cin>>t;
        r=linearsearch(p,n,t);
        if(r==-1)
        {
            cout<<t<<" Not Found\n";
        }
        else
        {
            cout<<t<<" Found at "<<r<<endl;
        }
        break;
    case 14:
        cout<<"Enter Target : ";
        cin>>t;
        r=binarysearch(p,n,t);
        if(r==-1)
        {
            cout<<t<<" Not Found\n";
        }
        else
        {
            cout<<t<<" Found at "<<r<<endl;
        }
        break;
    case 15:
        break;
      default:
        cout<<"Wrong Choice\n";
      }
    } while (choice!=15);
    
}