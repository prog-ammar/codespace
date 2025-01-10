#include<iostream>

using namespace std;

int lengthown(string s)
{
    char* str=&s[0];
    int count=0;
    while(*str!='\0')
    {
      count++;
      str++;
    }
    return count;
}

void reverse(string s)
{
    char* str=&s[0];
    int l=lengthown(s);
    char* str1=&s[l-1];
    int i=0;
    while(i<l/2)
    {
        char temp=*str;
        *str=*str1;
        *str1=temp;
        i++;
        str++;
        str1--;
    }
    cout<<s;
}

void append(string s)
{
    string str;
    cout<<"Enter String you want to append : ";
    getline(cin,str);
    char* o=&str[0];
    int l=str.length();
    s.resize(s.length()+l);
    char* h=&s[s.length()-l];
    for(int i=0;i<l;i++)
    {
        *h=*o;
        h++;
        o++;
    }
    cout<<s;
}


int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int l=lengthown(s);
    cout<<l;
    append(s);
}