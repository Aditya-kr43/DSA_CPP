#include<iostream>
using namespace std;

class Animal
{
public:
    string color;

    void eat()
    {
        cout << "Eats\n";
    }

    void breate()
    {
        cout << "breates\n";
    }
    
};
 
class Fish : public Animal
{
    public:
    int fins;
    void swim()
    {
        cout << "swims\n";
    }
};

int main()
{
    Fish f1;
    f1.fins = 2;
    cout << f1.fins << endl;
    f1.swim();
    f1.eat();
    f1.breate();
}