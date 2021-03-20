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
