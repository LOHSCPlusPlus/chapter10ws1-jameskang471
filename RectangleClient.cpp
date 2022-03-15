#include "Rectangle.h"
using namespace std;
#include <iostream>
int main() {
    Point a(3, 2);
    Point b(7, 4);
    Point c(5, 5);
    Point d(1, 1);
  
    Line e(a,b);
    Line f(c,d);
    Rectangle g(e,f);
    g.print();
  
  cout << "area is: " << g.calcArea() << endl;  
  
  return 0;
  
}
