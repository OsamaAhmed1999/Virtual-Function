#include <iostream>
#include "TableLamp.h"
using namespace std;

class AdjTableLamp : public TableLamp
{
  public:
  //CONSTRUCTOR
  AdjTableLamp();
  //GETTERS
  //SETTERS
  //MEMBER FUNCTIONS
  void dim();
  //DISPLAY FUNCTION
  void print(ostream& output);
  //OPERATOR OVERLOADING

  protected:
  private:
  float brightness;
};

AdjTableLamp::AdjTableLamp()
{
  this->brightness = 1.0;
}
void AdjTableLamp::dim()
{
  if(brightness > 0.1)
  {
    brightness = brightness - 0.1;
  }
}
void AdjTableLamp::print(ostream& output)
{
  output << *this << " with Brightness " << brightness << endl;
}