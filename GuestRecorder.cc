#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "GuestRecorder.h"

GuestRecorder::GuestRecorder(string n):Recorder(n){
}

void GuestRecorder::update(Reservation* a){
	//
	stringstream ss;
	cout<<"TEST FOR GUEST"<<endl;
	
	//a->print();
}
