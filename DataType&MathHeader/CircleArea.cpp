#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the radius of the circle: ";
    double r,pi;
    cin>>r;
    pi=acos(-1);
    double area = pi*r*r;
    cout<<"The area of the circle is: "<<area;
    return 0;
}