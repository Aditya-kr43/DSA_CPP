#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal makes sound...\n";
    }
};

class Dog: public Animal
{
    public:
    void sound()
    {
    cout << "dog barks...\n";
    }
};

class Cat: public Animal
{
    public:
    void sound()
    {
        cout << "Cats meow...\n";
    }
};

int main()
{
    Animal* a;
    Dog d;
    Cat c;

    a= &d;
    a->sound();

    a= &c;
    a->sound();
    
    return 0;
}