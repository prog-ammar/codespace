#include<iostream>
#include<string>

using namespace std;

string reverse(string s)
{
    char temp;
    for(int i=0;i<s.length()/2;i++)
    {
      temp=s[i];
      s[i]=s[s.length()-i-1];
      s[s.length()-i-1]=temp;
    }
    return s;
}



int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    string ans=reverse(str);
    cout<<ans;
}