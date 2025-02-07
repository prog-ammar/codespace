#include<iostream>

using namespace std;

class Car
{
    private:

    int manuYear;
    string name;
    string brand;

    public:
    
    void set(string carName,string carBrand,int Year)
    {
        manuYear=Year;
        name=carName;
        brand=carBrand;
    }

    void get()
    {
        cout<<"Name of Car : "<<name<<"\nBrand of Car : "<<brand<<"\nYear of Manufacturing : "<<manuYear<<endl;
    }
};

int main()
{
  Car a;
  a.set("City","Honda",2005);
  a.get();
  return 0;
}