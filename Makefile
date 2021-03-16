p3:	main.o Date.o Guest.o Room.o
	g++ -o p3 main.o Date.o Guest.o Room.o
	
main.o:	main.cc Date.h
	g++ -c main.cc

Date.o:	Date.cc Date.h
	g++ -c Date.cc

Guest.o: Guest.h Guest.cc
	g++ -c Guest.cc

Room.o: Room.h Room.cc
	g++ -c Room.cc
	
clean:
	rm -f *.o p3
