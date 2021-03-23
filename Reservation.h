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
    Reservation(Guest*,Room*,Date*,int);
    ~Reservation();
    //add later if necessary
    int getStay();
    float getCharge();
    Date* getDate();
    Guest* getGuest();
    Room* getRoom();
    bool lessThan(Reservation*);
    void print();
    
  private:
    Guest* g=NULL;
    Date* da=NULL;
    int stay;
    Room* room=NULL;
    float charge;
};

#endif
