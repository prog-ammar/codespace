#include<iostream>
#include<string>

using namespace std;

int countvowels(const char* s)
{
    int count=0;
    while(*s!='\0')
    {
        char ch=tolower(*s);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            count++;
        }
        s++;
    }
    return count;
}

int countwords(string s)
{
    int count=0;
    for(int i=0;i<=s.length();i++)
    {
        if(isspace(s[i]) || s[i]=='.' || s[i]==',' || s[i]=='?' || s[i]=='\0')
        {
            count++;
        }
    }
    return count;
}

int length1(string s)
{
    const char* l=s.c_str();
    int count=0;
    while(*l!='\0')
    {
        count++;
        l++;
    }
    return count;
}

// very very dumb way search only words without spaces
// void search(string s)
// {
//     string str;
//     cout<<"Substring : ";
//     getline(cin,str);
//     int i=0;
//     int start=0;
//     while(i<=s.length())
//     {
//         if(s[i]==' ' || s[i]=='\0')
//         {
//            string p=s.substr(start,i-start);
//            cout<<p;
//            if(p==str)
//            {
//             cout<<"it exists starting index "<<start<<endl;
//            }
//            start=i+1;
//            i++;
//         }
//         else
//         {
//            i++;
//         }
//     }
// }

void search(string s,string str)
{
    size_t f=s.find(str);
    if(f!=string::npos)
    {
      cout<<"Substring found at "<<f<<endl;
    }
    else
    {
        cout<<"Substring not found "<<endl;
    }
}


int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    string str;
    cout<<"Enter Substring : ";
    getline(cin,str);
    search(s,str);
}