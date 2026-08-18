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
        mileage = original.mileage;
    }
};

int main()
{
    Car c1("BMW X100", "BLACK");

    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    return 0;
}