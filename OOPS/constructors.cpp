#include<iostream>
using namespace std;

class Car {
    string name;
    string color;

public: 
    Car(string namevalue, string colorvalue)
    {
        cout << "constuctuor has been created...\n";
        name = namevalue;
        color = colorvalue;
    }
    void start()
    {
        cout << "car has started..\n";
    }
    void stop()
    {
        cout << "car has stopped.\n";
    }

    //getter
    string getname()
    {
        return name;
    }
    string getcolor()
    {
        return color;
    }
};

int main()
{
    Car c1("BMW", "Black");
    cout << "Car features: " << c1.getname() << " " << c1.getcolor() << endl;
    return 0;
}