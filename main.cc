#include <iostream>
using namespace std;
#include <string>

#include "Date.h"
#include "Guest.h"
#include "Room.h"

int main()
{
  //room testers
  Room r(C_REG, 501, 1500);
  Room r1(C_PREM, 501, 1500);
  Room r2(C_SUITE, 501, 1500);
  r.print();
  r1.print();
  r2.print();
  cout<<endl;
  return 0;
}

/*
  Date d1(28, 2, 2012);
  Date d3(28,12,2013);
  d1.print();
  Date d2(28,1,2011);
  d2.print();
  cout<<d2.lessThan(d1)<<endl;
  cout<<d2.equals(d1);
  //d1.printLong();
  cout<<"\nAFTER CHANGES"<<endl;
  d1.add(20);
  d3.add(31);
  d3.add(12);
  d1.print();
  d3.print();
  cout<<endl;
  Guest g("Nirmith",true);
  cout<<g.getPremium()<<endl;
  Guest g1("Obi Wan",false);
  g.addPts(300);
  g.print();
  g1.print();
  cout<<endl;
  */
