#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4};
    cout << "size: " << vec.size() << endl; //4
    cout << "capacity: " << vec.capacity() << endl; //4
//Adding element in the last
vec.push_back(5);
 cout << "size: " << vec.size() << endl; //5
    cout << "capacity: " << vec.capacity() << endl; //8
//Deleting element from the last
    vec.pop_back();
     cout << "size: " << vec.size() << endl; //4
    cout << "capacity: " << vec.capacity() << endl; //8
    return 0;
}