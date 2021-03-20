#ifndef RESMANAGER_H
#define RESMANAGER_H

#include "Recorder.h"
#include "Reservation.h"

#include <vector>

class Hotel;
class ResManager
{
  public:
	ResManager(Hotel*);
	~ResManager();
	void setHotel(Hotel*);
	void addReservation(string, int, int, int, int, ReqRoomType);
	void subscribe(Recorder*);
	void print();
	void printRecords();
	void notify(Reservation*);
  private:
  	Hotel* h;
	Reservation* res[MAX_ARR];
	int res_count;
	vector<Recorder*> p;
};

#endif
