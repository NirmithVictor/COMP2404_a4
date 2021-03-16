#ifndef HOTEL_H
#define HOTEL_H

#include "Guest.h"
#include "RoomArray.h"

#define MAX_SIZE 64

class Hotel
{
  public:
  	Hotel(string);
  	~Hotel();
  	RoomArray getRooms();
  	void addGuest(Guest*);
  	void addRoom(Room*);
  	void printGuest();
  	void printRooms();
  	bool findGuest(string,Guest**);
  	//bool findGuest(string);
  private:
	string Hname;
	//collection of guests stored as a statically alloacted primitive array of guest pointers
	Guest* arrGuest[MAX_SIZE];
	int g_count;
	RoomArray rooms;
	//the reservation manager that will handle all the reservations for the hotel, stored as a ResManager pointer; this class is described in a later step
};

#endif
