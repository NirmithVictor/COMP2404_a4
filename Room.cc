#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Room.h"

Room::Room(ReqRoomType a, int b,float c):type(a),roomN(b),rate(c){
}

Room::~Room(){
	cout<<type<<" "<<roomN<<" destroyed"<<endl;
}

string Room::getType(){
	if(type==0){
		cout<<"Regular\n";
		return "Regular";
	}
	else if(type==1){
		cout<<"Premium\n";
		return "Premium";
	}
	else if(type==2){
		cout<<"Suite\n";
		return "Suite";
	}
	else{
		return "UNKNOWN TYPE";
	}
}

float Room::getRate(){
	return rate;
}

int Room::getRoom(){
	return roomN;
}

void Room::print(){
	if(type==0){
		cout<<"Type: Regular"<<"\tRoom Number: "<<roomN<<"\tRate: "<<rate<<endl;
	}
	else if(type==1){
		cout<<"Type: Premium"<<"\tRoom Number: "<<roomN<<"\tRate: "<<rate<<endl;
	}
	else if(type==2){
		cout<<"Type: Suite"<<"\tRoom Number: "<<roomN<<"\tRate: "<<rate<<endl;
	}
}

void Room::computePoints(int& pts){
	if(type==0){
		pts=0.1*rate;
		//cout<<pts<<endl;
	}
	else if(type==1){
		pts=0.15*rate;
		//cout<<pts<<endl;
	}
	else if(type==2){
		pts=0.2*rate;
		//cout<<pts<<endl;
	}
}
