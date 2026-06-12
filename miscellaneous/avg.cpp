#include<iostream>
using namespace std;
int main(){
    int eng;
    int math;
    int phy;
    cout<<"enter the marks of english: ";
    cin>>eng;
    cout<<"enter the marks of math: ";
    cin>>math;
    cout<<"enter the marks of phy: ";
    cin>>phy;
    int avg = (eng+math+phy)/3;
    cout<<"avg marks is: "<<avg<<endl;
    return 0;
}