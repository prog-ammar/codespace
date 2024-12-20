#include<iostream>
#include<fstream>
#include<iostream>
#include<ctype.h>
#include<string>
#include<sstream>
#include<format>
#include<iomanip>
#include "TextTable.h"

#define TEXTTABLE_ENCODE_MULTIBYTE_STRINGS
#define TEXTTABLE_USE_EN_US_UTF8

std::string subjects[9]={"PF","PF-LAB","ICT","ICT-LAB","Cyber","Cyber-LAB","English","Islamiat","Maths"};

using namespace std;
void check_in_database(string,string);
void enter_marks(string,string);
void check_duplicate(string,string);
void delete_record(string,string);
void search(string,string,string);
void store_table();
void modify(string,string,string);
void deletemark(string,string,string);

void check_in_database(string name,string rollno)
{
    fstream database;
    database.open("database.txt",ios::in);
    string line,n,r;
    bool foundname=false,foundrollno=false;
    while(getline(database,line))
    {
      stringstream ss(line);
      getline(ss,r,',');
      getline(ss,n,',');
      if(r==rollno && n==name)
      {
        enter_marks(n,r);
        foundrollno=true;
        foundname=true;
      }
      else if(r==rollno)
      {
       foundrollno=true;
      }
      else if(n==name)
      {
        foundname=true;
      }
    }
    if(!foundname)
    {
        cout<<"There is No Student Named as :"<<name<<endl;
    }
    else if(!foundrollno)
    {
        cout<<name<<" Dont has "<<rollno<<" Roll Number";
    }
    database.close();
}

void enter_marks(string name, string rollno)
{
    fstream file;
    file.open("result.txt",ios::app);
    check_duplicate(name,rollno);
    file<<name;
    file.put(',');
    file<<rollno;
    int marks[9];
    file.put(',');
    for(int i=0;i<9;i++)
    {
     cout<<"Enter "<<subjects[i]<<" Marks : ";
     cin>>marks[i];
     if(marks[i]<0 || marks[i]>100)
     {
      cout<<"\nWrong Marks Entered";
      cout<<"\nPlease Reenter "<<subjects[i]<<" Marks \n\n";
      i--;
     }
     }  
    for(int i=0;i<9;i++)
    {
      file<<marks[i];
      if(i!=8)
      file.put(',');
      if(i==8)
      file.put('\n');
    }
    file.close();
}

void check_duplicate(string name,string rollno)
{
    fstream file;
    file.open("result.txt",ios::in);
    string line,n,r;
    while(getline(file,line))
    {
      stringstream ss(line);
      getline(ss,n,',');
      getline(ss,r,',');
      if(r==rollno || n==name)
      {
        cout<<name<<" Result is Already Exists.\n\t\tNOTE: To Change it you have to delete The Previous Record";
        exit(-1);
      }
    }
    file.close();
}

void delete_record(string name,string rollno)
{
    fstream file;
    file.open("result.txt",ios::in | ios::out);
    string line,n,r;
    fstream file1;
    file1.open("results.txt",ios::trunc | ios::out);
    while(getline(file,line))
    {
      stringstream ss(line);
      getline(ss,n,',');
      getline(ss,r,',');
      if(n!=name && r!=rollno)
      {
        file1<<line<<"\n";
      }
    }
    file.close();
    file1.close();
    remove("result.txt");
    rename("results.txt","result.txt");
}

void store_table()
{
  string name,rollno;
  string marks[9];
  fstream file;
  file.open("table.txt",ios::out);
  fstream file1;
  file1.open("result.txt",ios::in);
  TextTable t( '-', '|', '+' );
  string a;
  string Columns[11]={"Name","Roll No"," PF  ","PF-LAB","  ICT  ","ICT-LAB"," Cyber ","Cyber-LAB","English","Islamiat","Maths"};
  for(int i=0;i<=11;i++)
  {
    if(i!=11)
    t.add(Columns[i]);
    if(i==11)
    t.endOfRow();
  }
  while(getline(file1,a))
  {
  stringstream ss(a);
  getline(ss,name,',');
  getline(ss,rollno,',');
  for(int i=0;i<9;i++)
  {
  getline(ss,marks[i],',');
  }
  string Rows[11]={name,rollno,marks[0],marks[1],marks[2],marks[3],marks[4],marks[5],marks[6],marks[7],marks[8]};
  for(int i=0;i<=11;i++)
  {
    if(i!=11)
    t.add(Rows[i]);
    if(i==11)
    t.endOfRow();
  }
  }
  t.setAlignment( 10, TextTable::Alignment::RIGHT );
  file<<t;
  file.close();
  file1.close();
  }

void search(string name,string rollno,string subject)
{
    fstream file;
    file.open("result.txt",ios::in);
    string line,n,r;
    string marks[9];
    while(getline(file,line))
    {
      stringstream ss(line);
      getline(ss,n,',');
      getline(ss,r,',');
      if(r==rollno && n==name)
      {
        for(int i=0;i<9;i++)
        {
          getline(ss,marks[i],',');
        }
        for(int i=0; i<9;i++)
        {
          if(subject==subjects[i])
          {
            cout<<name<<" has "<<marks[i]<<" in "<<subject<<endl;
          }
        }
  
      }
    file.close();
}

}
void modify(string name,string rollno,string subject)
{
    fstream file;
    file.open("result.txt",ios::in);
    string line,n,r;
    string marks[9];
    string change;
    while(getline(file,line))
    {
      stringstream ss(line);
      getline(ss,n,',');
      getline(ss,r,',');
      if(r==rollno && n==name)
      {
        for(int i=0;i<9;i++)
        {
          getline(ss,marks[i],',');
        }
        for(int i=0; i<9;i++)
        {
          if(subject==subjects[i])
          {
            cout<<name<<" has "<<marks[i]<<" in "<<subject<<endl;
            cout<<"Enter the modified value : ";
            cin>>change;
            marks[i]=change;
          }
        }
  
      }
    }
    file.close();
}

void deletemark(string name,string rollno,string subject)
{
    fstream file;
    file.open("result.txt",ios::in);
    string line,n,r;
    string marks[9];
    string change;
    while(getline(file,line))
    {
      stringstream ss(line);
      getline(ss,n,',');
      getline(ss,r,',');
      if(r==rollno && n==name)
      {
        for(int i=0;i<9;i++)
        {
          getline(ss,marks[i],',');
        }
        for(int i=0; i<9;i++)
        {
          if(subject==subjects[i])
          {
            cout<<name<<" has "<<marks[i]<<" in "<<subject<<endl;
            marks[i]="";
            cout<<"Deleted Successfully !";
          }
        }
  
      }
    }
    file.close();

}


int main()
{
    string name;
    string rollno;
    cout<<"Enter Name : ";
    getline(cin,name);
    cout<<"Enter Rollno : ";
    cin>>rollno;
    int choice;
    cout<<"if you want to Add Record Press 1 other wise press 2 To delete record : ";
    cin>>choice;
    if(choice==1)
    {
    check_in_database(name,rollno);
    store_table();
    }
    else if(choice==2)
    delete_record(name,rollno);
}