#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Hotel.h"
#include "ResManager.h"

ResManager::ResManager(Hotel* a):h(a){
	//cout<<numRes<<endl;
	numRes=0;
	
}

ResManager::~ResManager(){
	//deleting the array for reservations
	for(int i=0;i<numRes;i++){
		delete res[i];
	}

	//delete h;
}
//
void ResManager::setHotel(Hotel* a){
	h=a;
}

void ResManager::addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req){

	if(stay<31){
		Date* d=new Date(day,mth,yr);
		Date t(*d);
		string a;
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
		
		int count=0;
		Room *r=NULL;
		Guest* g=NULL;
		Reservation *re=NULL;
		for(int i=0;i<h->getRooms().getSize();i++){
			if(a==h->getRooms().get(i)->getType()){
				//h->getRooms().get(i)->print();
				if(numRes<1){
				//empty reservation collection
					if(h->findGuest(name,&g)){
						r=h->getRooms().get(i);
						re=new Reservation(g,r,d,stay);
						//delete r;
						break;
					}else{
						d=NULL;
						break;
					}
				}
				else{
				//cout<<numRes<<endl;
				//checking if the days are booked or not 
					if(h->findGuest(name,&g)){
						//cout<<"NAME" <<endl;
						for(int j=0;j<numRes;j++){
							//res[j]->print();
							//cout<<"here"<<endl;
							Date *a=res[j]->getDate();
							//Room *r1=res[j]->getRoom();
							// && h->getRooms().get(i)->getRoom()!= r1->getRoom()
							//res[j]->getRoom()->print();
							if((!(a->equals(t))||(t.lessThan(*a)))){
								//cout<<"True"<<endl;
								r=h->getRooms().get(i);
								//r->print();
								re=new Reservation(g,r,d,stay);
								r=NULL;
							}else{
								//g=NULL;
								d=NULL;
								r=NULL;
								re=NULL;
								break;
							}
							//delete a;
						}
						
					}
					else{
						d=NULL;
						break;
					}
					
				}
			}
		}
		if(re!=NULL){
			//re->print();
			notify(re);
			res[numRes]=re;
			//g->print();
			numRes++;
			int a;
			re->getRoom()->computePoints(a);
			//cout<<a<<endl;
			re->getGuest()->addPts(a);
			
		}else if(g==NULL){
			cout<<"  GUEST "<< name <<" DOES NOT EXIST IN FILE"<<endl;
		}
		else if(r==NULL){
			cout<<"  ROOM IS BOOKED"<<endl;
		}
		//delete d;
		//delete r;
		//delete g;
	}
	else{
		cout<<"Guest: "<< name <<" couldn't be created due to excessive stay days";
		return;
	}
	//cout<<endl;
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

void ResManager::subscribe(Recorder* a){
	records.push_back(a);
	//cout<<records.size()<<endl;
}

void ResManager::print(){
	for(int i=0;i<numRes;i++){
		res[i]->print();
	}
}

void ResManager::printRecords(){
	for(int i=0;i<records.size();i++){
		records[i]->printRecords();
	}
}

void ResManager::notify(Reservation* a){
	//a->print();
	//a->print();
	//cout<<records.size();
	for(int i=0;i<records.size();i++){
	//	cout<<"IT IS ADDED"<<endl;
		records[i]->update(a);
	}
}

