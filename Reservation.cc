#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Reservation.h"

Reservation::Reservation(Guest* a,Room* b,Date* arr,int s){
	da=arr;
	g=a;
	room=b;
	stay=s;
	charge=room->getRate()*stay;
}

Reservation::~Reservation(){
	//cout<<"Reservation is destroyed"<<endl;
	delete da;
	//room=NULL;
	//g=NULL;
	//delete g;
	//if(g!=NULL){
	//delete g;
	//}
	//if(room!=NULL){
	//	delete room;
	//}
	//delete g;
	//delete room;
}

int Reservation::getStay(){
	return stay;
}

float Reservation::getCharge(){
	return charge;
}

//a getter for date, guest info and nah no room perhaps

Date* Reservation::getDate(){
	//da->print();
	return da;
}

Guest* Reservation::getGuest(){
	return g;
}

Room* Reservation::getRoom(){
	return room;
}
bool Reservation::lessThan(Reservation* l){
	if(da->lessThan(*(l->getDate()))){
		return true;
	}
	return false;
}

void Reservation::print(){
	cout<<"-- Guest: "<<g->getName()<<" :Room Number: "<<room->getRoom()<<" Arrival Date: ";
	Date *a=da;
	a->print();
	cout<<"; stay:"<<stay<<"; total: $"<<charge<<endl;
}






