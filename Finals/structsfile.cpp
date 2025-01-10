#include<iostream>
#include<fstream>

using namespace std;

int lines=0;

struct Employee
{
    string name;
    int salary;
    int id;
};

void sortbyid(Employee p[],int n)
{
    int min_index;
    for(int i=0;i<n;i++)
    {
      min_index=i;
      for(int j=i+1;j<n;j++)
      {
        if(p[min_index].id>p[j].id)
        {
            min_index=j;
        }
      }
      if(i!=min_index)
      {
        swap(p[min_index],p[i]);
      }
    }
}

void save(Employee p[],int n)
{
    ofstream file;
    file.open("employees.txt");
    for(int i=0;i<n;i++)
    {
      file<<p[i].id<<" "<<p[i].name<<" "<<p[i].salary<<"\n";
    }
    file.close();
}

void getvalues(Employee p[],int n)
{
    
   for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter Name : ";
        getline(cin,p[i].name);
        cout<<"Enter id : ";
        cin>>p[i].id;
        cout<<"Enter salary : ";
        cin>>p[i].salary;
    }
}

void load(Employee p[])
{
  ifstream file;
  file.open("employees.txt");
  for(int i=0;;i++)
  {
    file>>p[i].id>>p[i].name>>p[i].salary;
    if(file.eof())
    {
      lines=i;
      break;
    }
  }  
  file.close();
}

void search(Employee p[],int eid,int n)
{
    int left=0;
    int right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(p[mid].id==eid)
        {
           cout<<endl;
           cout<<"Employees Name : "<<p[mid].name<<endl;
           cout<<"Employees Id : "<<p[mid].id<<endl;
           cout<<"Employees Salary : "<<p[mid].salary<<endl;
           break;
        }
        else if (p[mid].id>eid)
        {
            right=mid-1;
        }
        else if(p[mid].id<eid)
        {
            left=mid+1;
        }
    }
}

void printdata(Employee p[],int n)
{
    for(int i=0;i<n;i++)
    {
           cout<<"Employees Name : "<<p[i].name<<endl;
           cout<<"Employees Id : "<<p[i].id<<endl;
           cout<<"Employees Salary : "<<p[i].salary<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter Number of Employees : ";
    cin>>n; 
    Employee e[n];
    int choice;
    do
    {
    cout<<"\n1.Add Data \n2.Read Data \n3.Search by id\n4.Exit\nEnter operation : ";
    cin>>choice;
    if(choice==1)
    {
      getvalues(e,n);
      sortbyid(e,n);
      save(e,n);
    }
    else if(choice==2)
    {
      load(e);
      printdata(e,lines);
    }
    else if(choice==3)
    {
      load(e);
      int id;
      cout<<"Enter Employee id : ";
      cin>>id;
      search(e,id,n);
    }
    else if(choice==4)
    {
        cout<<"Exiting ";
        exit(0);
    }
    else
    {
        cout<<"Wrong Choice";
    }
    }while(choice!=4);
}