#include<iostream>
using namespace std;
int main(){
    float pencil;
    float pen;
    float eraser;
    cout<<"enter the cost of pencil items: ";
    cin>>pencil;
    cout<<"enter the cost of pen items: ";
    cin>>pen;
    cout<<"enter the cost of eraser items: ";
    cin>>eraser;
    float cost = pencil+pen+eraser;
    float gst = cost*18/100;
    cout<<"Total bill: "<<cost<<endl;
    cout<<"with gst: "<<gst<<endl;
    return 0;
}