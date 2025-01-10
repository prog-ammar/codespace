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

void frequency(string s)
{
    for(int i=0;i<s.length();i++)
    {
        char sl=s[i];
        int count=1;
        if(sl!=' ' && sl!='\0')
        {
          for(int j=i+1;j<s.length();j++)
         {
              if(sl==s[j])
              {
                s[j]='\0';
                count++;
              }
        }
        cout<<sl<<" : "<<count<<"\n";
        }
        
    }
}

void rmduplicates(string &s)
{
    int l=0;
    for(int i=0;i<s.length();i++)
    {
        char temp=s[i];
        if(temp!=' ')
        for(int j=i+1;j<s.length();j++)
        {
            if(temp==s[j])
            {
                s.replace(i,1,1,'\0');
            }
        }
    }
}


void findandreplace(string s,string str,string str1)
{
    size_t t=s.find(str);
    if(t!=string::npos)
    {
        s.replace(t,str.length(),str1);
        cout<<s;
    }
    else
    {
        cout<<"Substring not found \n";
    }
     
}

void rmspaces(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            s[i]='\0';
        }
    }
    cout<<s;
}

bool anagramcheck(string s)
{
    string s1;
    cout<<"Enter String : ";
    getline(cin,s1);
    if(s1.length()==s.length())
    { 
        bool found=false;
        for(int i=0;i<s.length();i++)
        {
          for(int j=0;j<s1.length();j++)
          {
            if(s[i]==s[j])
            {
                found=true;
            }
          }
          if(found==false)
          {
            return false;
          }
        }
    }
    return true;
}

// wrong
// void nonrepeating(string s)
// {
//     string str[100];
//     int l=0;
//     int o=0;
//     for(int i=0;i<s.length();i++)
//     {
//       bool dup=true;
//       str[l][o]=s[i];
//       for(int j=i;j>0;j--)
//       {
//         if(s[j]==s[i+1])
//         {
//             l++;
//             o=0;
//             dup=true;
//             break;
//         }
//       }
//       if(dup)
//       {
//         str[l][o]=s[i+1];
//         o++;
//       }
//     }
//     int largest=str[0].length();
//     int index=0;
//     for(int i=1;i<l;i++)
//     {
//       if(largest<str[i].length())
//       {
//         largest=str[i].length();
//         index=i;
//       }
//     }
//     cout<<str[index]<<"\n";
// }

int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);

    // string str;
    // cout<<"To Find : ";
    // getline(cin,str);
    // string str1;
    // cout<<"To Replace : ";
    // getline(cin,str1);
    // findandreplace(s,str,str1);

    // bool l=anagramcheck(s);
    // if(l)
    // {
    //     cout<<"it is an Anagram "<<endl;
    // }
    // else
    // {
    //     cout<<"it is not an Anagram "<<endl;
    // }
    rmduplicates(s);
    cout<<s;
    
}