#include<iostream>
using namespace std;
int main()
{
    // char word[30];
    // cin >> word;//ignore whitespaces
    // cout << word << endl;

    char sentence[30];
    cin.getline(sentence, 30, 'd');
    cout << "string: " << sentence << endl; 
    return 0;
}