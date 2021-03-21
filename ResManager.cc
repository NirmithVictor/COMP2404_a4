#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Hotel.h"
#include "ResManager.h"

ResManager::ResManager(Hotel* a):h(a),numRes(0){
	//cout<<numRes<<endl;
}

ResManager::~ResManager(){
	//deleting the array for reservations
	for(int i=0;i<numRes;i++){
		delete res[i];
	}
	//delete h;
	//do we need to delete the vector array seems real sus tbh
}
//
void ResManager::setHotel(Hotel* a){
	h=a;
}

//addReservation function breakdown
/*
1. stay value must be below 31 if not then break else continue
2. Dynamically allocate a new Date object with given said date store in a temporary pointer
3. loop over hotel room criteria
	3.1 it must satify or exist in the req
	3.2 check if the room is available for every starting date
4. if no room is available break	
*/
void ResManager::addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req){
	//cout<< name <<endl;
	Date* d;
	if(stay<31){
		cout<<name<<endl;
		d=new Date(day,mth,yr);
		d->print();
		//tester for date
		/*cout<<"Date is :";
		date->print();*/
		cout<<endl;
		//cout<<req;
		//temporary string for cross referenceing it
		string a="";
		if(req==0){
			//cout<<"Regular\n";
			a = "Regular";
		}
		else if(req==1){
			//cout<<"Premium\n";
			a = "Premium";
		}
		else if(req==2){
			//cout<<"Suite\n";
			a = "Suite";
		}
		//cout<<a<<endl;
		//h->getRooms().print();
		cout<<"Size: "<<h->getRooms().getSize()<<endl;
		for(int i=0;i<h->getRooms().getSize();i++){
			//h->getRooms().get(i)->print();
			
			if(a == h->getRooms().get(i)->getType()){
				//cout<<"SATISFIED TEST"<<endl;
				h->getRooms().get(i)->print();	
			}
		}
		cout<<endl<<endl;
		
		delete d;
	}
	else{
		cout<<"Guest: "<< name <<" couldn't be created due to excessive stay days"<<endl;
		return;
	}
}
