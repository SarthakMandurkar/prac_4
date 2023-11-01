
#include<iostream>
using namespace std;

float vol(float, float);
float vol(double);
float vol(double,double,double);

int main()
 {
float r,h,side,l,height,b;

cout<<"\n Enter the radius and height of Cylinder: ";
cin>>r>>h;
cout<<"\n Enter the side of Cube:";
cin>>side;
cout<<"\n Enter the Length, Breadth and height of Cuboid : ";
cin>>l>>b>>height;

cout<<"\n The Volume of Cylinder is : "<<vol(r,h);
cout<<"\n The Volume of Cube is : "<<vol(side);
cout<<"\n The Volume of Cuboid is : "<<vol(l,b,h);

return 0;
}

float vol(float r, float h){
    return(3.14*r*r*h);
}
float vol(double side){
    return(side*side*side);
}
float vol(double l, double b, double height){
return(l*b*height);
}
