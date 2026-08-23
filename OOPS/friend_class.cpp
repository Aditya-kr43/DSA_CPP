#include<iostream>
using namespace std;
//----------------friend class---------------//
class A
{
    string secret = "Secret data...\n";
    friend class B;
    friend void secretReveal(A &obj);
};

class B
{
    public:
    void showSecret(A &obj)
    {
        cout << obj.secret << endl;
    }
};

//----------friend function-----------------//

void secretReveal(A &obj)
{
    cout << obj.secret << endl;
}

int main()
{
    A a1;
    B b1;

   // b1.showSecret(a1);

   secretReveal(a1);

    return 0;
}