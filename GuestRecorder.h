#ifndef GUESTRECORDER_H
#define GUESTRECORDER_H

//#include <vector>
#include"Recorder.h"
#include"Reservation.h"

class GuestRecorder:public Recorder
{
  public:
	GuestRecorder(string="");
	virtual void update(Reservation*);

};

#endif
