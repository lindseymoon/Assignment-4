//////////////
//
//CS172--Assignment #4
//EX04_04
//Exercise 11.9: Geomety_the_Rectangle2D_Class
//
//////////////

/*

Use booleans

Take center y value (given) and subtract half the height and you get the bottom
Center y value plus half of the height and you get the top

Everything to the right of the right point of the rectangle is outside the rectangle
Everything to the left of the left point of the rectangle is outside the rectangle
Everything to the top of the top point of the rectangle is outside the rectangle
Everything to the bottom of the bottom point of the rectangle is outside the rectangle

If they are all false, then you are inside of the rectangle
If any one of them is true, the point is outside of the rectangle

if (x1 < left || x1 > right ||  y1 < bottom || y1 > top)
{	
	return false
}


*/

#include <iostream>
#include "Rectangle2D.h"

using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << r1.getArea() << endl;
	cout << r1.getPerimeter() << endl;
	cout << r1.contains(3, 3) << endl;
	cout << r1.contains(r2) << endl;
	//r1.overlaps(r3);
}