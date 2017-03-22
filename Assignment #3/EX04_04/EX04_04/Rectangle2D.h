#include <iostream>
#include <cmath>
#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

using namespace std;

class Rectangle2D
{
private:
	double x, y;
	double width, height;
	double area;
	double perimeter;

public:
	Rectangle2D();
	Rectangle2D(double X, double Y, double Width, double Height);

	const double setX();
	const double getX();

	const double setY();
	const double getY();

	const double setWidth();
	const double getWidth();

	const double setHeight();
	const double getHeight();

	const double getArea();
	const double getPerimeter();

	const bool contains(double x, double y); //returns true if specified point (x,y) is inside this rectangle
	const bool contains(const Rectangle2D &r); //returns true if the specified rectangle is inside this rectangle
	const bool overlaps(const Rectangle2D & r); //returns true if the specified rectangle overlaps with this rectangle
	
};

#endif