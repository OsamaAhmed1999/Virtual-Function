#include <iostream>
using namespace std;

class Top
{
  public:
  Top()
  {}
  virtual void MyMemory()
  {
    cout << "Top I Forget" << endl;
  }
  void Disk()
  {
    cout << "Top Space" << endl;
  }
  void Erased()
  {
    cout << "Top For Good" << endl;
  }
  void ThisExam()
  {
    Erased();
    MyMemory();
  }
};