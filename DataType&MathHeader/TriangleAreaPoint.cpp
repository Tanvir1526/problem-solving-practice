#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a1,b1,a2,b2,a3,b3;
    cout<<"points:";
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    double area=.5*(((a1*b2)+(a2*b3)+(a3*b1))-((a1*b3)+(a3*b2)+(a2*b1)));
    cout<<"area:"<<area;

}