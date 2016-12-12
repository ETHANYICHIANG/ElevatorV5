//Programmer: Ethan Yi Chiang
//Programmer's ID: 1538719

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <cstdlib>
#include <ctime>

#include "Rider.h"
#include "Building.h"
#include "Floor.h"
#include "Panel.h"
#include "Elevator.h"

int main()
{
  cout << "Programmer: Ethan Yi Chiang\n"
       << "Programmer's ID: 1538719\n"
       << "File: " << __FILE__;

  srand(time(0)); rand();

  for (int i = 0;; i++)
  {
    cout << "-----------------------------------------------\n";
    cout << "-- Time " << i << " ---------------------------\n";
    for (int elevator = 0; elevator < Building::ELEVATORS; elevator++)
       cout << Building::elevators[elevator] << endl;

    for (int floor = 0; floor < Building::FLOORS; floor++)
       cout << Building::floors[floor] << endl;

    double myArrivalRate = 1; // you choose!
    Building::action(i < 300 ? myArrivalRate : 0);

    cin.get();
  }
}
