#ifndef RESMANAGER_H
#define RESMANAGER_H

#include "Recorder.h"
#include "RoomArray.h"
#include "Reservation.h"

#include <vector>

class Hotel;
class ResManager
{
  public:
	ResManager(Hotel* =NULL);
	~ResManager();
	void setHotel(Hotel*);
	void addReservation(string, int, int, int, int, ReqRoomType);
	void subscribe(Recorder*);
	void print();
	void printRecords();
  private:
  	Hotel* h;
	Reservation* res[MAX_ARR];
	int numRes;
	vector<Recorder*> records;
	void notify(Reservation*);
};

#endif
