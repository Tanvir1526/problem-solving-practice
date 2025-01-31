#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,pi;
    pi=acos(-1);
    cout<<"Enter the triangle sides: "<<endl;
    cin>>a>>b>>c;
    cout<<endl;
    double A,B,C;
    A=acos(((b*b)+(c*c)-(a*a))/
                    (2 *b *c));
                    
    B=asin((sin(A)*b)/a);
   

    cout<<(A*(180/pi))<<endl<<(B*(180/pi))<<endl<<180-(A*(180/pi))-(B*(180/pi));;
}