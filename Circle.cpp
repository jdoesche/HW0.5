#include <iostream>
using namespace std;
#include "Circle.h"

void circle::move(int xin, int yin)
{
  x = xin;
  y = yin;
}

void circle::resize(float radiusin)
{
  radius = radiusin;
}

void circle::read()
{
  int xin;
  int yin;
  float radiusin;
  
  cout << "Please enter the x location: ";
  cin >> xin;
  cout << endl << "Please enter the y location: ";
  cin >> yin;
  cout << endl << "Please enter the radius size: ";
  cin >> radiusin;
  cout << endl;

  circle::move(xin, yin);
  circle::resize(radiusin);
}

void circle::print()
{
  cout << "The circle currently has: " << endl;
  cout << "  a(n) x-value of " << x << endl;
  cout << "  a(n) y-value of " << y << endl;
  cout << "  a radius of " << radius << endl;
}
