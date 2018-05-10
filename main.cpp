#include <iostream>
#include "IsOver.h"
using namespace std;

int main()
{
  Top* Hat = new IsOver;
  Hat->MyMemory();
  Hat->Disk();
  Hat->ThisExam();

  Top Dog = *(new IsOver);
  Dog.MyMemory();
  Dog.Disk();
  Dog.ThisExam();

  system("pause");
}