
#include <iostream>
using namespace std;

double c_area(double radius)
{
	return 3.14 * radius * radius;
}	

double rect_area(double length, double width)
{
	return length * width;
}

int main()
{
	double radius, length, width;

	cout << "Enter radius of circle: ";
	cin >> radius;
	cout << "Area of circle: " << c_area(radius) << endl;

	cout << "Enter length of rectangle: ";
	cin >> length ;
	cout <<  "Enter width of rectangle: ";
	cin >> width;
	cout << "Area of rectangle: " << rect_area(length, width) << endl;
	return 0;    
}
