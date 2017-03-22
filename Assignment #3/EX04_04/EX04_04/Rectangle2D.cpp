#include "Rectangle2D.h"
using namespace std;

Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double X, double Y, double Width, double Height)
{
	x = X;
	y = Y;
	width = Width;
	height = Height;
}

const double Rectangle2D::setX()
{
	return x;
}

const double Rectangle2D::getX()
{
	return x;
}

const double Rectangle2D::setY()
{
	return y;
}

const double Rectangle2D::getY()
{
	return y;
}

const double Rectangle2D::setWidth()
{
	return width;
}

const double Rectangle2D::getWidth()
{
	return width;
}

const double Rectangle2D::setHeight()
{
	return height;
}

const double Rectangle2D::getHeight()
{
	return height;
}

const double Rectangle2D::getArea()
{
	area = height * width;
	return area;
}

const double Rectangle2D::getPerimeter()
{
	perimeter = ((2 * height) + (2 * width));
	return perimeter;
}

const bool Rectangle2D::contains(double x, double y)
{
	double top = y + height / 2;
	double bottom = y - height / 2;
	double left = x - width / 2;
	double right = x + width / 2;

	if ((x < left || x > right || y < bottom || y > top))
		return false;
	else
		return true;
}

const bool Rectangle2D::contains(const Rectangle2D &r)
{
	double top = r.y + r.height / 2;
	double bottom = r.y - r.height / 2;
	double left = r.x - r.width / 2;
	double right = r.x + r.width / 2;

	if (contains(left, top) && (left, bottom) && (right, top) && (right, bottom))
		return true;
	else
		return false;
}

const bool Rectangle2D::overlaps(const Rectangle2D & r)
{
	double top = r.y + r.height / 2;
	double bottom = r.y - r.height / 2;
	double left = r.x - r.width / 2;
	double right = r.x + r.width / 2;

	if (contains(left, top) || (left, bottom) || (right, top) || (right, bottom))
		return true;
	else
		return false;
}
