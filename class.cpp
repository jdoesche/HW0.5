
#include <iostream>
using namespace std;
#include "Circle.h"

int main()
{
  circle o;
  
  cout << "Welcome to the Circle Program!" << endl;
  o.move(0, 0);
  o.resize(0);

  o.read();
  cout << "I hope this works" << endl;
  o.print();
  
  return 0;
}
