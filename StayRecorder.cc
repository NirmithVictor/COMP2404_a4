#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "StayRecorder.h"

StayRecorder::StayRecorder(string n):Recorder(n){
}

void StayRecorder::update(Reservation* a){
	//if the stay is greater than 3 days
	//form a string that is pretty much just guest name and duration of stay using string stream
	stringstream ss;
	if(a->getStay()>3){
		//cout<<"THE STAY IS GREATER THAN 3"<<endl;
		//cout<<a->getGuest().getName()<<endl;
		ss<<"-- GUEST NAME:"<<a->getGuest().getName()<<" -> AND YOUR STAY DURATION IS: "<<a->getStay();
		record.push_back(ss.str());
	}
	
	//a->print();
}
