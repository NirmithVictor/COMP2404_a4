#ifndef ROOM_H
#define ROOM_H

#include "defs.h"

class Room
{
  public:
	Room(ReqRoomType,int=0,float=0);
	~Room();
	string getType();
	float getRate();
	int getRoom();
	void print();
	void computePoints(int&);
	
  private:
  	ReqRoomType type;
  	int roomN;
  	float rate;
};

#endif
