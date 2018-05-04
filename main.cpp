#include <iostream>
#include "AdjTableLamp.h"
using namespace std;

int main()
{
  AdjTableLamp *Lamp = new AdjTableLamp();
  cout << *Lamp << endl;
  Lamp->print(cout);
  Lamp->dim();
  Lamp->dim();
  Lamp->dim();
  Lamp->print(cout);
  Lamp->press_switch();
  Lamp->print(cout);

  system("pause");
}