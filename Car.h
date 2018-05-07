#include <iostream>
using namespace std;

enum status{EMPTY,ENOUGH,FULL};

class car
{
  public:
  car()
  {
    this->make = "Foxy";
    this->KmPerLitre = 10;
    this->MaxFuleCapacity = 15;
    this->FuelLevel = EMPTY;
    this->cost = 100000;
  }
  car(string make , float KmPerLitre , float MaxFuleCapacity , status CurrentStatus , float cost)
  {
    this->make = make;
    this->KmPerLitre = KmPerLitre;
    this->MaxFuleCapacity = MaxFuleCapacity;
    this->FuelLevel = CurrentStatus;
    this->cost = cost;
  }
  car(car& clone)
  {
    this->make = clone.make;
    this->KmPerLitre = clone.KmPerLitre;
    this->MaxFuleCapacity = clone.MaxFuleCapacity;
    this->FuelLevel = clone.FuelLevel;
    this->cost = clone.cost;
  }
  float getcost()
  {
    return this->cost;
  }
  string getmake()
  {
    return this->make;
  }
  float getKmPerLitre()
  {
    return this->KmPerLitre;
  }
  int getFuelStatus()
  {
    return this->FuelLevel;
  }

  void setcost(float price)
  {
    this->cost = price;
  }
  void setmake(string make)
  {
    this->make = make;
  }
  void setKmPerLitre(float KmPerLitre)
  {
    this->KmPerLitre = KmPerLitre;
  }
  void setFuelStatus(status s)
  {
    this->FuelLevel = s;
  }
  void display()
  {
    cout << "Hi I am World best Car" << endl;
    cout << "My cost is $2.9 million" <<endl;
    cout << "Any objection!!" << endl;
    cout << "Cost: " << this->cost << endl;
    cout << "Fuel Status: " << this->FuelLevel << endl;
    cout << this->KmPerLitre << " Km per Litre" << endl;
    cout << this->make << endl << endl;
  }
  
  private:
  string make;
  float KmPerLitre;
  float MaxFuleCapacity;
  int FuelLevel;
  float cost;

};