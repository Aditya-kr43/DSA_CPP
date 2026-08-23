//  Create a base class Person with attributes name and age. 
// Derive a class Student from Person and add an additional attribute studentID. 
// Implement a method displayStudentInfo( ) in the Student class to display all details. 
// In main function Student class object will be created in this format: 
// Student student("Alice", 20, "S12345"); 

#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    
};
    
class Student: public Person
{
    public:
    string studentID;

    Student(string sname, int sage, string sstudentID)
    {
        name = sname;
        age = sage;
        studentID = sstudentID;
    }

   void displayStudentINFO()
    {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << studentID << endl;

    }
};

int main()
{
    Student student("Alice", 20, "S123");
    student.displayStudentINFO();

    return 0;
}