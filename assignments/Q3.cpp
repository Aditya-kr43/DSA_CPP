#include<iostream>
using namespace std;
int main(){
    float principal;
    float rate;
    float time;
    cout<<"enter the principal: ";
    cin>>principal;
    cout<<"enter the rate: ";
    cin>>rate;
    cout<<"enter the time: ";
    cin>>time;
    float interset = (principal*rate*time)/100;
    cout<<"total interset = "<<interset<<endl;
    return 0;
}