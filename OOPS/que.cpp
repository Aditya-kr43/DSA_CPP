#include<iostream>
using namespace std;

class User {
private:
    int id;
    string password;
public:
    string username;

    User(int id)
    {
        this-> id = id; 
    }
    //setter
    string getpassword()
    {
        return password;
    }
    //setter
    void setpassword(string password)
    {
        this->password = password;
    }
};
int main()
{
    User user1(101);
    user1.username = "Aditya";
    user1.setpassword("abcd");
    
    cout << "username: " << user1.username << endl;
    cout << "password: " <<user1.getpassword() << endl;
}