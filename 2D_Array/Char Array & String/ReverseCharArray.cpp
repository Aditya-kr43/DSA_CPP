#include<iostream>
#include<string.h>
using namespace std;

void ReverseArray(char word[], int n)
{
    int st = 0, end = n-1;
    while(st < end)
    {
        swap(word[st], word[end]);
        st++;
        end--;
    }
}
int main()
{
    char word[] = "Aditya";
    ReverseArray(word, strlen(word));
    cout << "Reversed Array: " << word << endl;
    return 0;
}