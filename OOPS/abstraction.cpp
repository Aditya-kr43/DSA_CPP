#include<iostream>
#include<string>
using namespace std;

class Shape
{
    public:
    virtual void Draw()=0;
};

class Circle: public Shape
{
    public:
    void Draw()
    {
        cout << "Draw Circle" <<endl;
    }
};

class Square: public Shape
{
    public:
    void Draw()
    {
        cout << "Draw Sqr" <<endl;
    }
};

int main()
{
    Circle cir1;
    cir1.Draw();

    Square sq1;
    sq1.Draw();

    return 0;
}