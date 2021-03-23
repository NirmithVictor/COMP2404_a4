p3:	main.o Date.o Guest.o Room.o Hotel.o RoomArray.o Reservation.o Recorder.o StayRecorder.o GuestRecorder.o UpgradeRecorder.o ResManager.o Control.o
	g++ -o p3 main.o Date.o Guest.o Room.o Hotel.o RoomArray.o Reservation.o Recorder.o StayRecorder.o GuestRecorder.o UpgradeRecorder.o ResManager.o Control.o
	
main.o:	main.cc Date.h
	g++ -c main.cc

Date.o:	Date.cc Date.h
	g++ -c Date.cc

Guest.o: Guest.h Guest.cc
	g++ -c Guest.cc

Room.o: Room.h Room.cc
	g++ -c Room.cc
	
Hotel.o: Hotel.h Hotel.cc
	g++ -c Hotel.cc

RoomArray.o: RoomArray.cc RoomArray.h
	g++ -c RoomArray.cc

Reservation.o: Reservation.cc Reservation.h
	g++ -c Reservation.cc

Recorder.o: Recorder.cc Recorder.h
	g++ -c Recorder.cc
	
StayRecorder.o: StayRecorder.cc StayRecorder.h
	g++ -c StayRecorder.cc 
	
GuestRecorder.o: GuestRecorder.cc GuestRecorder.h
	g++ -c GuestRecorder.cc 

UpgradeRecorder.o: UpgradeRecorder.cc UpgradeRecorder.h
	g++ -c UpgradeRecorder.cc 
	
ResManager.o: Recorder.h ResManager.cc ResManager.h
	g++ -c ResManager.cc

Control.o: Control.h Control.cc
	g++ -c Control.cc

clean:
	rm -f *.o p3
