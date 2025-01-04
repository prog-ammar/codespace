#include<iostream>

using namespace std;

int main()
{
    int r,column;
    cout<<"Enter rows and columns : ";
    cin>>r>>column;
    int arr[r][column];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
        }
    }
   int row=r;int columns=column;
   cout<<"Row Reversed : \n";
   for(int i=0;i<row;i++)
   {
    for(int j=columns-1;j>=0;j--)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
 
  cout<<"Column Reversed :\n";
  for(int i=row-1;i>=0;i--)
  {
    for(int j=0;j<columns;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Both Column and row Reversed :\n";
  for(int i=row-1;i>=0;i--)
  {
    for(int j=columns-1;j>=0;j--)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Row and Cloumn Interchanged : \n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<columns;j++)
    {
      cout<<arr[j][i]<<" ";

    }
    cout<<endl;
  }
  cout<<"Last row first Column : \n";
  for(int i=column-1;i>=0;i--)
  {
    for(int j=0;j<row;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
}
