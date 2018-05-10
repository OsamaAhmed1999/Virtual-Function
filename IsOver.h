#include <iostream>
#include "Top.h"
using namespace std;

class IsOver : public Top
{
  public:
  void MyMemory()
  {
    cout << "IsOver Gone" << endl;
  }
  void Disk()
  {
    cout << "IsOver Slipped" << endl;
  }
  void virtual Erased()
  {
    cout << "IsOver Rubbed Out" << endl;
  }
};