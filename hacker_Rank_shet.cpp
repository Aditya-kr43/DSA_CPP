#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    if(n >= 1 && n <= 9)
        cout << arr[n];
    else
        cout << "Greater than 9";

    return 0;
}