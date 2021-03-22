#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "UpgradeRecorder.h"

UpgradeRecorder::UpgradeRecorder(string n):Recorder(n){
}

void UpgradeRecorder::update(Reservation* a){
	//if it is a normal user and it's charge or spending budget is > 1500
	//form a string that is pretty much just guest name and duration of stay using string stream
	stringstream ss;
	//cout<<"IT IS HERE"<<endl;
	if(!(a->getGuest()->getPremium()) && (a->getCharge()>1500) ){
		//cout<<"YES IT IS "<<endl;
		ss<<"-- GUEST NAME:"<<a->getGuest()->getName()<<" -> AND YOUR STAY DURATION IS: "<<a->getStay();
		record.push_back(ss.str());
	}
	
	//a->print();
}
