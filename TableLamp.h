#include <iostream>
using namespace std;

class TableLamp 
{
  public:
  //CONSTRUCTOR
  TableLamp();
  //GETTERS
  //state getonoff()
  //{
   // this->on_off = ON;
  //}
  //SETTERS
  //MEMBER FUNCTIONS
  void press_switch();
  //DISPLAY FUNCTION
  friend ostream& operator << (ostream& output , const TableLamp& object);
  //OPERATOR OVERLOADING
  protected:
  private:
  enum state{ON,OFF}on_off;
};

TableLamp::TableLamp()
{
  this->on_off = ON;
}
void TableLamp::press_switch()
{
  on_off = (on_off == ON)? OFF:ON;
}
ostream& operator << (ostream& output , const TableLamp& object)
{
  return((object.on_off == 0)? output << "Lamp is ON" : output << "Lamp is OFF");
}