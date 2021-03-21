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


//cout<<"SATISFIED TEST"<<endl;
				//maieh->getRooms().get(i)->print();
				//room must be available on these days if no do not create a reservation
				/*Guest *g;
				if(h->findGuest(name,&g)){
					g->print();
					count=1;
					//res[numRes]=new Reservation(g,h->getRooms().get(i),d,stay);
					//numRes++;
					//cout<<endl;
				}
				else{
					cout<<endl;
					return;	
				}*/

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
		int count=0;
		//cout<<"Size: "<<h->getRooms().getSize()<<endl;
		for(int i=0;i<h->getRooms().getSize();i++){
			//h->getRooms().get(i)->print();
			//the room is of a given type
			
			if(a == h->getRooms().get(i)->getType() ){
				
			}

		}
		cout<<endl<<endl;
	}
	else{
		cout<<"Guest: "<< name <<" couldn't be created due to excessive stay days"<<endl;
		return;
	}
}
