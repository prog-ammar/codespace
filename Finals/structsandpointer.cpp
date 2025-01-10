#include<iostream>

using namespace std;

struct Student
{
    string name;
    int marks;
};

int main()
{
    // Student* s=new Student();

    // cout<<"Enter Name and Marks : ";
    // cin>>s->name>>s->marks;

    // cout<<"Student Data \n";
    // cout<<s->name<<" "<<s->marks;
    int n;
    cout<<"Enter no of Students : ";
    cin>>n;
    Student* s=new Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Student Name : ";
        cin.ignore();
        getline(cin,s[i].name);
        cout<<"Enter Student Marks : ";
        cin>>s[i].marks;
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks : "<<s[i].marks;
        cout<<endl;
    }
    
}
