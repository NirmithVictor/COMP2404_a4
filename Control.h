#ifndef CONTROL_H
#define CONTROL_H

#include "ResManager.h"
#include "Hotel.h"

#include "StayRecorder.h"
#include "GuestRecorder.h"
#include "UpgradeRecorder.h"

class Control
{
	public:
		Control();
		~Control();
		void launch();
	private:
		ResManager* resMgr;
		Hotel* hotel;
		StayRecorder *s;
		UpgradeRecorder *u;
		GuestRecorder *ga;
		void initHotel();
};

#endif
