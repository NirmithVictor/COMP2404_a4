#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Hotel.h"
#include "ResManager.h"

ResManager::ResManager(Hotel* a):h(a),res_count(0){
	cout<<res_count<<endl;
}

ResManager::~ResManager(){
	delete h;
	//deleting the array for reservations
	for(int i=0;i<res_count;i++){
		delete res[i];
	}
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
