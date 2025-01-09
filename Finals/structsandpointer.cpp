#include<iostream>

using namespace std;

struct Student
{
    string name;
    int marks;
};

int main()
{
    Student* s=new Student();
    cout<<"Enter Name and Marks : ";
    cin>>s->name>>s->marks;

    cout<<"Student Data \n";
    cout<<s->name<<" "<<s->marks;
    
}
