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

    virtual void get()//Getter Function
    {
        cout<<"Name of Car : "<<name<<"\nBrand of Car : "<<brand<<"\nYear of Manufacturing : "<<manuYear<<endl;
    }

    void getNoofCars()
    {
        cout<<"Total Cars :"<<totalCount<<"\n";
    }

    ~Car()//Destructor Automatically called at end 
    {
        cout<<"Car has been Destroyed \n";
        totalCount--;
    }
};

int Car::totalCount=0;//you cant initialize the static variable inside class


//You can Call the Member Fucntions of the Class without making the object
//but it should be static member you cant call the non static one
//so you can declared an function like static int foo() and then use it
//like if class name is box then box::foo()

class ElectricCar : public Car
{
   private:
   int battery;
   public:
   void set(int level)
   {
      battery=level;
   }
   void get() override
   {
      cout<<"Battery Level : "<<battery<<endl;
   }

};


int main()
{
  Car a;
  a.set("City","Honda",2005);
  a.getNoofCars();
  a.get();
  ElectricCar b;
  b.set(80);
  b.get();
  return 0;
}