#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Guest.h"

Guest::Guest(string a,bool b):name(a),premium(b),pts(0){}

Guest::~Guest(){
	cout<<"Guest Name: "<<name<<" destroyed"<<endl;
}

string Guest::getName(){
	return name;
}

bool Guest:: getPremium(){
	return premium;
}

void Guest::addPts(int n){
	pts+=n;
}

void Guest::print(){
	if(premium){
		cout<<"Premium Client "<<"Name Of Guest: "<<name<<" with Loyalty Points: "<<pts<<endl;		
	}
	else{
		cout<<"Normal Client "<<"Name Of Guest: "<<name<<" with Loyalty Points: "<<pts<<endl;
	}
}
