#ifndef RECORDER_H
#define RECORDER_H

#include <vector>
#include"Reservation.h"

class Recorder
{
  public:
	Recorder(string="");
	void printRecords();
	virtual void update(Reservation*)=0;
  
  protected:
	vector<string> record;
  private:
	string Recorder_name;
	//vector<string> record;
};

#endif
