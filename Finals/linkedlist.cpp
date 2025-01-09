#include<iostream>

using namespace std;

struct person
{
    string name;
    int age;
    person* next=nullptr;
};

int main()
{
  string name;
  int age;
  cout<<"Enter Name : ";
  getline(cin,name);
  cout<<"Enter Age : ";
  cin>>age;
   
  person* p= new person();
  p->name=name;
  p->age=age;

  person* p1=new person();
  p1->name="Falana";
  p1->age=18;

  p->next=p1;

  person* current=p;
  
  while(current!=nullptr)
  {
    cout<<current->name<<" "<<current->age;
    cout<<endl;
    current=current->next;
  }
}