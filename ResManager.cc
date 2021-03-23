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
/*if(h->getRooms().get(i)->getType()==a){
		//		cout<<"FOUND TYPE"<<endl;
				if(numRes<1){
					Guest *g;
					if(h->findGuest(name,&g)){
						cout<<name<<" FOUND"<<endl;
						Reservation* r=new Reservation(g,h->getRooms().get(i),d,stay);
						res[numRes]=r;
						numRes++;
						
						res[0]->getDate()->print();
						cout<<endl;
						r->print();
						notify(r);
					}
					//check if guests name is name the hotel guest collection if yes then dynamically allocate the Reservation object with guest, room, date and stay;
					//push into the reservation collection
					//calculate accumulated points for the guest so like compute points in the room class and then do the addPts function in guest
					//notify function call I think
				}
		//		else{
		//		check if the name of guest is in the hotel guest collection if yes then we proceed to check if the day is occupied or not in the reservation 
		//			for(int i=0;i<numRes;i++){				
						//if not occupied dynamically allocate the reservation pointer and push into the reservation collection
						//calculate accumulated points for the guest so like compute points in the room class and then do the addPts function in guest
						//notify function call I think
		//			}
		//		}
				else{
					//cout<<"IN TESTING PROGRESS"<<endl;
					Guest *g;
					if(h->findGuest(name,&g)){
						//cout<<"Original Date: ";
						d->print();
						cout<<endl;
						cout<<name<<" EXISTS"<<endl;
						Date t(*d);
						int c;
						for(int i=0;i<numRes;i++){
							//cout<<"STAY: \n";
							c=0;
							//int k=1;
							for(int j=1;j<=stay;j++){
								//check date in the reservation collection and see if any of it is occupied if not then we add to it else do not add
								//c++;
								t.add(1);
								if(&t!=res[i]->getDate()){
									//cout<<"YAY"<<endl;
									c++;
								}
							}
							
						}
						/*if(c==stay){
							//then we push it into the res collection and increment numRes
							Reservation* r=new Reservation(g,h->getRooms().get(i),d,stay);
							res[numRes]=r;
							numRes++;
							//cout<<"Yes"<<endl;
						}else{
							//cout<<day<<"-"<<mth<<"-"<<yr<<" are booked."<<endl;
						}
						cout<<endl;
					}
					//for(int i=0;i<numRes;i++){
						
					}
				}
		
			}*/
			//a->print();
							//t.print();
							//cout<<endl;
							//cout<<res[j]->getDate()<<endl;;
							//(res[j]->getRoom()!=h->getRooms().get(i)->getRoom())
							//res[j]->getRoom()->print();

void ResManager::addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req){

	if(stay<31){
		//cout<<name<<endl;
		//cout<<endl;
		//cout<<endl;
		//cout<<req;
		//temporary string for cross referenceing it
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
							if((!(a->equals(t))||(t.lessThan(*a)))  ){
								//cout<<"True"<<endl;
								r=h->getRooms().get(i);
								//r->print();
								re=new Reservation(g,r,d,stay);
								//break;
							}
							//delete a;
						}
						
					}
					else{
						break;
					}
					
				}
			}
		}
		if(re!=NULL  && g!=NULL && r!=NULL){
			//re->print();
			res[numRes]=re;
			//g->print();
			numRes++;
			//calculate points for the guest
			g->print();
			r->print();
			int a;
			re->getRoom()->computePoints(a);
			cout<<a<<endl;
			//notify 
			notify(re);
			//d->print();
			//delete re;
			//cout<<endl;
		}else if(g==NULL){
			cout<<"GUEST "<< name <<" DOES NOT EXIST IN FILE"<<endl;
		}
		else if(r==NULL){
			cout<<"ROOM IS BOOKED"<<endl;
		}
		//delete d;
		//delete r;
		//delete g;
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

void ResManager::subscribe(Recorder* a){
	records.push_back(a);
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
	for(int i=0;i<records.size();i++){
		records[i]->update(a);
	}
}
