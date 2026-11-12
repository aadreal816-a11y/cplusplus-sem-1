// Program to calculate area of a rectangle
#include<iostream>
using namespace std;

int main() {
    double length, width, area;

    // Input statements
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Processing
    area = length * width;

    // Output statement
    cout << "Area of rectangle: " << area;

    return 0;
}
