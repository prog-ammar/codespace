#include<iostream>

using namespace std;
struct person
{
    string name;
    int age;
};
person setvalues(string n,int a)
{
  person s1;
  s1.name=n;
  s1.age=a;
  return s1;
}

int main()
{
   person o=setvalues("Ammar",19);
   cout<<o.name;
   cout<<o.age;
}