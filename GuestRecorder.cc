#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "GuestRecorder.h"

GuestRecorder::GuestRecorder(string n):Recorder(n){
}

void GuestRecorder::update(Reservation* a){
	//if the guest is premium
	//form a string that is pretty much just guest name and duration of stay using string stream
	stringstream ss;
	//cout<<"TEST FOR GUEST"<<endl;
	if(a->getGuest()->getPremium()){
		//cout<<"IT IS PREMIUM"<<endl;
		ss<<"-- GUEST NAME:"<<a->getGuest()->getName()<<" -> AND YOUR STAY DURATION IS: "<<a->getStay();
		record.push_back(ss.str());
	}
	
	//a->print();
}
