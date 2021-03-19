#ifndef STAYRECORDER_H
#define STAYRECORDER_H

//#include <vector>
#include"Recorder.h"
#include"Reservation.h"

class StayRecorder:public Recorder
{
  public:
	StayRecorder(string="");
	virtual void update(Reservation*);

};

#endif
