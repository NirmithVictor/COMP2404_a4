#include <iostream>
using namespace std;
#include <string>

#include "Date.h"
#include "Guest.h"
#include "Room.h"
#include "Hotel.h"

int main()
{
  //Guest g("Nirmith",true);
  //Guest g1("Goodwin");
  //testers for hotel 
  Hotel *h=new Hotel("Victorian Hotel");
  h->addGuest(new Guest("Nirmith",true));
  h->addGuest(new Guest("Goodwin"));
  h->addRoom(new Room(C_SUITE, 501, 1500));
  h->addRoom(new Room(C_PREM, 410, 700));
  h->printGuest();
  h->printRooms();
  cout<<endl;
  delete h;
  return 0;
  
}

/*
  //room testers
  Room r(C_REG, 501, 1500);
  Room r1(C_PREM, 501, 1500);
  Room r2(C_SUITE, 501, 1500);
  r.print();
  int a;
  r.computePoints(a);
  cout<<a<<endl;
  r1.computePoints(a);
  cout<<a<<endl;
  r2.computePoints(a);
  cout<<a<<endl;
  r1.print();
  r2.print();
  cout<<endl;*/
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
