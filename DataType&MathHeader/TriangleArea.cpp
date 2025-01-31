#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter Side 1: "<<endl;
    cin>>a;
    cout<<"Enter Side 2: "<<endl;
    cin>>b;
    cout<<"Enter Side 3: "<<endl;
    cin>>c;
    double s=(a+b+c)/2;

    double area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The area of the Triangle is :"<<area<<endl;
}