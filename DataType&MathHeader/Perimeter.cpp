#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double pi,r;
    pi=acos(-1);
    cout<<"Enter the redious of circle: "<<endl;
    cin>>r;
    double perimeter=2*pi*r;
    cout<<"Perimeter of the Circle :"<<perimeter<<endl<<pi;
}