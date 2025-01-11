#include<iostream>
#include<fstream>
using namespace std;

struct student
{
    string name;
    int rollno;
    int marks;
};

void getvalues(student p[], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"Enter student name : ";
    cin>>p[i].name;
    cout<<"Enter student rollno : ";
    cin>>p[i].rollno;
    cout<<"Enter student marks : ";
    cin>>p[i].marks;
  }
}


void storevalues(student p[],int n,ofstream &file)
{
    for(int i=0;i<n;i++)
    {
        file<<p[i].name<<" "<<p[i].rollno<<" "<<p[i].marks<<"\n";
    }
}

void readvalues(student p[],int n, ifstream &file)
{
   for(int i=0;i<n;i++)
   {
     file>>p[i].name>>p[i].rollno>>p[i].marks;
   }
}
void printvalues(student p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i].name<<" "<<p[i].rollno<<" "<<p[i].marks<<"\n";
    }
}

int main()
{
  ofstream file;
  file.open("1.txt");
  if(!file)
  {
    cerr<<"there is an error";
  }
  int n;
  cout<<"Enter no of students : ";
  cin>>n;
  student s[n];
  getvalues(s,n);
  storevalues(s,n,file);
  file.close();
  ifstream file1;
  file1.open("1.txt");
  if(!file1)
  {
    cerr<<"There is an error ";
  }
  student o[n];
  readvalues(o,n,file1);
  file1.close();
  printvalues(o,n);
}