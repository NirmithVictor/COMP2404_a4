#ifndef HOTEL_H
#define HOTEL_H

#include "Guest.h"
#include "RoomArray.h"

class Hotel
{
  public:
  	Hotel();
  	~Hotel();
  	RoomArray getRooms();
  	void addGuest(Guest*);
  	void addRoom(Room*);
  	void printGuest();
  	void printRooms();
  	bool findGuest(string,Guest**);
  private:
	string Hname;
	//collection of guests stored as a statically alloacted primitive array of guest pointers
	RoomArray rooms;
	//the reservation manager that will handle all the reservations for the hotel, stored as a ResManager pointer; this class is described in a later step
};

#endif
