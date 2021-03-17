#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Reservation.h"

Reservation::Reservation(string n,int y,int m,int d,int s,ReqRoomType r){
	cout<<n<<endl;
	da=new Date(d,m,y);
	g=new Guest(n);
	room=new Room(r);
}

Reservation::~Reservation(){
	cout<<g->getName()<<" destroyed"<<endl;
	delete da;
	delete g;
	delete room;
}
