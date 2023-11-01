#include<iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "Choose a shape to calculate volume of: "<<endl;
        cout << "1. Cylinder"<<endl;
        cout << "2. Cube"<<endl;
        cout << "3. Cuboid"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice (between 1 to 4) : ";
        cin >> choice;
        
        switch (choice) {
            case 1:
            double r, height, cylinder_volume;
            cout<<"Enter the radius of the cylinder: ";
            cin >>r;
            cout << "Enter the height of the cylinder: ";
            cin >> height;
            cylinder_volume = 3.14*r*r* height;
            cout << "The volume of the cylinder is : "<<cylinder_volume<<endl;
            break;
           
            case 2:
            double side, cube_volume;
            cout << "Enter the side length of the cube: ";
            cin >> side;
            cube_volume = side*side*side;
            cout << "The volume of the cube is : "<<cube_volume<<endl;
            break;
            
            case 3:
            double length, breadth, h, cuboid_volume;
            cout << "Enter the Length, Breadth and Height of the Cuboid : ";
            cin >>length>>breadth>>h;
            cuboid_volume = length*breadth*height;
            cout << "The volume of the sphere is: "<<cuboid_volume<<endl;
            break;

            case 4:
            cout << "Exiting the program." << endl;
            break;

            default:
            cout << "Invalid choice. Please enter a valid option between 1 to 4." << endl;
            break;
    }
} while (choice!=4);
return 0;
}
