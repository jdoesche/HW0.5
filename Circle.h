#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class circle
{
 private:
  int x;
  int y;
  float radius;
 public:
  void move(int xin, int yin);
  void resize(float radiusin);
  void read();
  void print();
};
#endif //CIRCLE_H
