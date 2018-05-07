#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
  cout << "My first choice" << endl;
  car bughattiChiron;
  bughattiChiron.setmake("Bughatti Chiron");
  //bughattiChiron.display();
  bughattiChiron.setcost(500);
  bughattiChiron.display();

  cout << "My second choice" << endl;
  car civic;
  //civic.display();
  civic.setcost(20000);
  civic.setFuelStatus(FULL);
  civic.setmake("Civic");
  civic.display();

  system("pause");
}