#include "Rectangle.h"
#include <iostream>
using namespace std;
#include <math.h>

Rectangle::Rectangle(Line l, Line h) {
  length = l;
  height = h;
}
void Rectangle::print() {
  cout << "Length: ";
  length.print();
  cout << "Height: ";
  height.print();
}
 double Rectangle::calcArea() {
  int area = length.lineLength() * height.lineLength();
   return area;
}