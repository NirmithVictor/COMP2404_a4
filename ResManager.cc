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
	//Date* d;
	//Date* temp;
	if(stay<31){
		cout<<name<<endl;
		Date* d=new Date(day,mth,yr);
		Date t(*d);
		//t=d;
		t.add(stay);
		//temp->print();
		t.print();
		cout<<endl;
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
		
		delete d;
		
	}
	else{
		cout<<"Guest: "<< name <<" couldn't be created due to excessive stay days"<<endl;
		return;
	}
	cout<<endl;
}
//cout<<"Size: "<<h->getRooms().getSize()<<endl;
		/*for(int i=0;i<h->getRooms().getSize();i++){
			//h->getRooms().get(i)->print();
			//the room is of a given type
			
			if(a == h->getRooms().get(i)->getType() ){
				if(numRes==0){
				//check if name is in it if not do not push other wise if it is then yes
				}
				else{
					for(int j=0;j<numRes;j++){
						//check if the day for stay is there or nah along with stay so that and then use the add shizzle to check if it is not in those days
						//for(int i=0;i<stay;i++){
						//	check if it is not in those days or starting and ending with it
						//}
						//if found to be unique inside the previous if statement{
							// then proceed to check if name is in the room if YES THEN ADD DYNAMICALLY ALLOCATE NEW RESERVATION AND THEN ADD TO THE RESERVATION COLLECTION ELSE DO NOTHING
						//}
					}
				}
			}
		}*/
