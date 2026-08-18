#include<iostream>
using namespace std;

class Car
{
    public:

    string name;
    string color;
    int *mileage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int;  //Dynamic allocation
        *mileage = 12;
    }
    //custom copy constructor
    Car(Car &original)
    {
        cout << "Coping constructor to new....\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
    ~Car() {
        cout << "Deleting objects...." << endl;
        if(mileage != NULL)
        delete mileage;
    }
};

int main()
{
    Car c1("BMW X100", "BLACK");

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;
   
    return 0;
}