#include <iostream>
using namespace std;
#include <string>
/*
#include "Date.h"
#include "Guest.h"
#include "Room.h"
#include "Hotel.h"
*/

#include "Recorder.h"
#include "StayRecorder.h"
int main()
{
  //Recorder r("TEST");
  Guest *g=new Guest("Nirmith",true);
  Room *r=new Room(C_REG, 501, 1500);
  Date *d=new Date(28, 3, 2012);
  Reservation* a=new Reservation(g,r,d,6);
  a->print();
  cout<<endl;
  StayRecorder s("TEST FOR STAY");
  s.update(a);
  return 0;
  
}

/*TESTER FOR RESERVATION CLASS
  Guest *g=new Guest("Nirmith",true);
  Room *r=new Room(C_REG, 501, 1500);
  Date *d=new Date(28, 3, 2012);
  Reservation* a=new Reservation(g,r,d,6);
  cout<<endl;
  Guest *g1=new Guest("Nirmith",false);
  Room *r1=new Room(C_REG, 501, 1500);
  Date *d1=new Date(26, 3, 2012);
  Reservation* b=new Reservation(g1,r1,d1,7);
  cout<<"TO GET GUEST NAME: "<<b->getGuest().getName()<<endl;
  cout<<"TO GET STAY: "<<b->getStay()<<endl;
  cout<<"TO CHECK IF GUEST IS PREMIUM:"<<b->getGuest().getPremium()<<endl;
  cout<<"TO GET CHARGE: "<<b->getCharge()<<endl;
  //cout<<b->getCharge()<<endl;
  //Date *e=new Date(b->getDate());
  //e->print();
  //delete e;
  //if(b->lessThan(a)){
  //	cout<<"B is lesser than a"<<endl;
  //}
  //else{
  //	cout<<"A lesser than B"<<endl;
  //}
  //a->print();
  //b->print();
  cout<<endl;
  delete a;
  delete b;
  */

  //tester for temporary hotel
  //Guest g("Nirmith",true);
  //Guest g1("Goodwin");
  //testers for hotel 
  /*Hotel *h=new Hotel("Victorian Hotel");
  cout<<endl;
  h->addGuest(new Guest("Nirmith",true));
  h->addGuest(new Guest("Goodwin"));
  h->addRoom(new Room(C_SUITE, 501, 1500));
  h->addRoom(new Room(C_PREM, 410, 700));
  h->printGuest();
  cout<<endl;
  h->printRooms();
  Guest *g;
  if(h->findGuest("Nirmith",&g)){
  	g->print();
  }
  if(h->findGuest("Jesus",&g)){
  	g->print();
  }
  //g->print();
  cout<<endl;
  delete h;*/
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
