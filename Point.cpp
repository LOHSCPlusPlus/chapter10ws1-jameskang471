#include "Point.h"
#include <iostream>
using namespace std;
#include <math.h>
// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point() {
    x = 0.0;
    y = 0.0;
}

Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}
void Point::print() {
    cout << "x: " << x << " ";
    cout << "y: " << y << " ";
	  cout <<  endl;
}
double Point::calcDistance(Point other) {
  double xVal = pow(x - other.x, 2);
  double yVal = pow(y - other.y, 2);
  double dist = sqrt(xVal + yVal);
  return dist;

}

// double Point::getX() {    these are accessors 
//   return x;
// }
// double Point::getY() {     accessors
//   return y;
// }
// void Point::setX(double xVal) {    mutators   
//   x = xVal;
// }
// void Point::setY(double YVal) {    mutators 
//   y = YVal;
// }