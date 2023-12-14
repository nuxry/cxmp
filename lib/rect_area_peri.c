#include <math.h>
#include "func.h"

/*
 * Calculates the area of a rectangle.
 *
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @return The area of the rectangle.
 */
double rectArea(double length, double width)
{
    // Formula: Area = Length * Width
    double area = length * width;
    return area;
}

double rectPerimeter(double length, double width)
{
    // Formula: Perimeter = 2 * (Length + Width)
    double perimeter = 2 * (length + width);
    return perimeter;
}