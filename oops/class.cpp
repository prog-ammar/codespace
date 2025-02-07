#include<iostream>

using namespace std;

class Car
{
    private:

    int manuYear;//Member Varaiables
    string name;
    string brand; //static variable is shared amoung all the objects in an class and any where its change it change for all objects

    public:
    static int totalCount;
    Car(): name(""), brand(""), manuYear(0){totalCount++;} //Constructor Automatically Called When Object is Created

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

    static int getNoofCars()
    {
        return totalCount;
    }

    ~Car()//Destructor Automatically called at end 
    {
        cout<<"Car has been Destroyed \n";
        totalCount--;
    }
};

int Car::totalCount=0;

int main()
{
  Car a;
  a.set("City","Honda",2005);
  cout<<"Total Cars : "<<Car::getNoofCars<<"\n";
  a.get();
  return 0;
}