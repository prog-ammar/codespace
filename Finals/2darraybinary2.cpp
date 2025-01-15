#include<iostream>

using namespace std;

const int col=100;

void binary2d(int p[][col],int r,int c,int target)
{
    int low=0;
    int high=(r*c)-1;
    int mid;
    bool found=false;
    while(low<=high)
    {
      mid=(low+high)/2;
      int midele=p[mid/r][mid%c];
      
      if(midele==target)
      {
        cout<<target<<" found at "<<mid/r<<" "<<mid%c;
        found=true;
        break;
      }
      else if(midele>target)
      {
        high=mid-1;
      }
      else if(midele<target)
      {
        low=mid+1;
        
      }
    }
    if(!found)
    {
        cout<<"Element not found "<<endl;
    }
    
}




int main()
{
    int r,c;
    cout<<"Enter rows and cols : ";
    cin>>r>>c;
    int arr[r][col];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter a number you want to search : ";
    cin>>target;
    binary2d(arr,r,c,target);
}