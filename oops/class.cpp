#include<iostream>

using namespace std;

class Car
{
    private:

    int manuYear;//Member Varaiables
    string name;
    string brand;

    public:
    
    Car(): name(""), brand(""), manuYear(0) {} //Constructor Automatically Called When Object is Created

    void set(string carName,string carBrand,int Year)//Member Functions //Setter Function
    {
        manuYear=Year;
        name=carName;
        brand=carBrand;
    }

    void get()//Getter Function
    {
        cout<<"Name of Car : "<<name<<"\nBrand of Car : "<<brand<<"\nYear of Manufacturing : "<<manuYear<<endl;
    }

    ~Car()//Destructor Automatically called at end 
    {
        cout<<"Car has been Destroyed \n";
    }
};

int main()
{
  Car a;
  a.set("City","Honda",2005);
  a.get();
  return 0;
}