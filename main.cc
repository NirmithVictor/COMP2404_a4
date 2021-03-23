#include <iostream>
using namespace std;
#include <string>
/*
#include "Date.h"
#include "Guest.h"
#include "Room.h"
#include "Hotel.h"
#include "Recorder.h"
#include "ResManager.h"
#include "Hotel.h"
#include "Recorder.h"
#include "StayRecorder.h"
#include "GuestRecorder.h"
#include "UpgradeRecorder.h"
*/

#include "Control.h"
int main()
{
  Control c;
  c.launch();
  return 0;
  
}

/* RESMANAGER TESTER
  ResManager *resMgr=new ResManager();
  Hotel *hotel=new Hotel("Victorian Hotel",resMgr);
  //guests
  hotel->addGuest(new Guest("Juliet", true));
  hotel->addGuest(new Guest("Ben", true));
  hotel->addGuest(new Guest("Goodwin"));
  hotel->addGuest(new Guest("Harper", true));
  hotel->addGuest(new Guest("Ethan"));
  hotel->addGuest(new Guest("Horace"));
  hotel->addGuest(new Guest("Aimee"));
  //hotel->printGuest();
  
  //rooms
  //cout<<endl<<"ROOM:"<<endl;
  hotel->addRoom(new Room(C_SUITE, 501, 1500));
  hotel->addRoom(new Room(C_PREM, 410, 700));
  hotel->addRoom(new Room(C_PREM, 420, 700));
  hotel->addRoom(new Room(C_REG, 322, 300));
  hotel->addRoom(new Room(C_REG, 324, 300));
  hotel->addRoom(new Room(C_REG, 326, 300));
  hotel->addRoom(new Room(C_REG, 212, 200));
  hotel->addRoom(new Room(C_REG, 214, 200));
  hotel->addRoom(new Room(C_REG, 216, 200));
  hotel->addRoom(new Room(C_REG, 218, 200));
  //hotel->getRooms().get(1)->print();
  //hotel->printRooms();
  //cout<<endl;
  resMgr->setHotel(hotel);
  StayRecorder *s =new StayRecorder(" ");
  UpgradeRecorder *u=new UpgradeRecorder(" ");
  GuestRecorder *ga=new GuestRecorder(" ");
  resMgr->subscribe(s);
  resMgr->subscribe(u);
  resMgr->subscribe(ga);
  resMgr->addReservation("Ben",     2021, 5, 11,  4, C_PREM);
  resMgr->addReservation("Juliet",  2021, 5, 10,  3, C_PREM);
  resMgr->addReservation("Horace",  2021, 5, 28, 10, C_PREM);
  resMgr->addReservation("Aimee",   2021, 5, 28,  8, C_PREM);
  resMgr->addReservation("Sophie",  2021, 5, 28,  8, C_PREM);
  resMgr->addReservation("Harper",  2021, 5, 12,  1, C_PREM);
  resMgr->addReservation("Harper",  2021, 5, 12,  1, C_REG);
  resMgr->addReservation("Ethan",   2021, 5,  8,  7, C_REG);
  resMgr->addReservation("Ethan",   2021, 5, 28, 10, C_REG);
  resMgr->addReservation("Timmy",   2021, 5, 28,  8, C_REG);
  resMgr->addReservation("Horace",  2021, 5, 25,  2, C_REG);
  resMgr->addReservation("Goodwin", 2021, 5, 25, 12, C_REG);
  resMgr->addReservation("Ben",     2021, 5, 27,  5, C_REG);
  resMgr->addReservation("Harper",  2021, 5, 29,  2, C_SUITE);
  resMgr->addReservation("Juliet",  2021, 5, 30,  1, C_SUITE);
  resMgr->print();
  cout<<endl<<"GUESTS AND THEIR POINTS"<<endl;
  hotel->printGuest();
  cout<<endl;
  cout<<"STAY TESTER"<<endl;
  s->printRecords();
  cout<<endl<<"GUEST TESTER"<<endl;
  ga->printRecords();
  cout<<endl<<"UPGRADE TESTER"<<endl;
  u->printRecords();

  delete s;
  delete u;
  delete ga;
  delete resMgr;
  delete hotel;
  */

/*TESTER FOR RECORDER CLASSES
  Guest *g=new Guest("Nirmith",true);
  Room *r=new Room(C_REG, 501, 1500);
  Date *d=new Date(28, 3, 2012);
  Guest *g1=new Guest("Nirmith",false);
  Room *r1=new Room(C_REG, 501, 1500);
  Date *d1=new Date(28, 3, 2012);
  Reservation* a=new Reservation(g,r,d,6);
  Reservation* b=new Reservation(g1,r1,d1,9);
  a->print();
  cout<<endl;
  //Recorder ra;
  StayRecorder *s=new StayRecorder("TEST FOR STAY");
  GuestRecorder *ga=new GuestRecorder("TEST FOR GUEST");
  UpgradeRecorder *u=new UpgradeRecorder("TEST FOR UPGRADE");
  cout<<endl;
  s->update(a);
  s->update(b);
  cout<<"stay"<<endl;
  s->printRecords();
  cout<<endl;
  ga->update(a);
  ga->update(b);
  cout<<"guest"<<endl;
  ga->printRecords();
  cout<<endl;
  u->update(b);
  u->printRecords();
  cout<<endl;
  delete ga;
  delete b;
  delete s;
  delete u;
  delete a;*/

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
