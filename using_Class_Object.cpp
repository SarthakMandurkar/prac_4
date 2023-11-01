#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
class ShapeVolumeCalculator {
public:
   double volume (double radius, double height) {return PI* pow(radius, 2) *height;}
   double volume (double sideLength) {return pow(sideLength, 3);}
   double volume (double length, double width, double height) {return length *width* height;}
};

int main(){
    ShapeVolumeCalculator calculator; char choice;
    do{
       cout << "Choose a shape to calculate volume: \n1. Cylinder\n2. Cube\n3. Cuboid \nEnter your choice (1/2/3):"<<endl;
       cin>>choice;
switch(choice){
    case '1': {
        double radius, height;
        cout << "Enter the radius of the cylinder: "; cin >> radius;
        cout << "Enter the height of the cylinder: "; cin>> height;
        cout << "Volume of the cylinder: "<< calculator.volume (radius, height) << endl;
break;
}
    case '2': {
        double sideLength;
        cout << "Enter the side length of the cube: "; cin>>sideLength;
        cout << "Volume of the cube: " << calculator.volume (sideLength) << endl;
break;
}
    case '3': {
        double length, width, cuboidHeight;
        cout << "Enter the length of the cuboid: "; cin>> length;
        cout << "Enter the width of the cuboid: "; cin>> width;
        cout << "Enter the height of the cuboid: "; cin>> cuboidHeight;
        cout << "Volume of the cuboid: " << calculator.volume (length, width, cuboidHeight) << endl;
break;
}
default:
cout << "Invalid choice! Please select 1, 2, or 3." << endl; }
cout << "Do you want to calculate the volume of another shape? (y/n): ";cin >> choice;
}while (choice == 'y' || choice == 'Y');
return 0;
}
