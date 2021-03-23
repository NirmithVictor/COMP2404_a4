#include <iostream>
using namespace std;
#include <string>

#include "Recorder.h"

Recorder::Recorder(string n):Recorder_name(n){
}

void Recorder::printRecords(){
	//cout<<"IT REACHED"<<endl;
	//if(record.size()==0){
	//	cout<<"empty"<<endl;
	//}
	for(int i=0;i<record.size();i++){
		cout<<record[i]<<endl;
	}
}
