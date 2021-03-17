#ifndef RESERVATION_H
#define RESERVATION_H

#include "defs.h"
#include "Date.h"
#include "Guest.h"
#include "Room.h"

class Reservation
{
  public:
  //ReqRoomType
    Reservation(string,int,int,int,int,ReqRoomType);
    ~Reservation();
    //add later if necessary
    int getStay();
    float getCharge();
    
    bool lessThan(Reservation*);
    void print();
    
  private:
    Guest* g;
    Date* da;
    int stay;
    Room* room;
    float charge;
};

#endif
