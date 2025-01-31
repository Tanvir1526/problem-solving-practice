#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a1,b1;
    float a2,b2;
    float distance;
    cout<<"Enter co ordinate 1 :"<<endl;
    cin>>a1>>b1;
    cout<<"Enter co ordinate 2 :"<<endl;
    cin>>a2>>b2;
    distance=sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    
    cout<<endl<<"Distance of the two "<<distance;
}