#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Hotel.h"

Hotel::Hotel(string n):Hname(n),g_count(0){
	cout<<Hname<<endl;
}
Hotel::~Hotel(){
	cout<<Hname<<" destroyed"<<endl;
	//dealloacte the the guest array details
	for(int i=0;i<g_count;i++){
		cout<<arrGuest[i]->getName()<<" destroyed"<<endl;
		delete arrGuest[i];
	}
}

RoomArray Hotel::getRooms(){
	return rooms;
}

void Hotel::addGuest(Guest* g){
	if(g_count==MAX_SIZE){
		cout<<"Guest List is full"<<endl;
	}
	else if(g_count==0){
		arrGuest[g_count]=g;
		g_count++;
	}
	else{
		arrGuest[g_count]=g;
		g_count++;
	}
}

void Hotel::addRoom(Room* a){
	rooms.add(a);
}

void Hotel::printGuest(){
	for(int i=0;i<g_count;i++){
		arrGuest[i]->print();
	}
}

void Hotel::printRooms(){
	rooms.print();
}

bool Hotel::findGuest(string n,Guest** g){
	cout<<n<<endl;
	for(int i=0;i<g_count;i++){
		if(n==arrGuest[i]->getName()){
			cout<<"FOUND GUEST\n";
			*g=arrGuest[i];
			return true;
		}
	}
	cout<<"GUEST NOT FOUND\n";
	return false;
}










