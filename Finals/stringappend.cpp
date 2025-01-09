#include<iostream>
#include<string>

using namespace std;

string append(string s,string s1)
{
    return (s+" "+s1);
}

int main()
{
  string str;
  cout<<"Enter string : ";
  getline(cin,str);
  string str1;
  cout<<"Enter string you want to append with prevoius string : ";
  getline(cin,str1);
  string str2=append(str,str1);
  cout<<"Apended String : "<<str2;
}  