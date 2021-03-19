p3:	main.o Date.o Guest.o Room.o Hotel.o RoomArray.o Reservation.o Recorder.o
	g++ -o p3 main.o Date.o Guest.o Room.o Hotel.o RoomArray.o Reservation.o Recorder.o
	
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
	
clean:
	rm -f *.o p3
