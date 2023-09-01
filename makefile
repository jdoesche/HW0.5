CC = g++
CFLAGS = -g -Wall -Wextra

default: circle

circle:		Circle.o class.o
	$(CC) $(CFLAGS) -o circle Circle.o class.o

Circle.o:	Circle.cpp Circle.h
	$(CC) $(CFLAGS) -c Circle.cpp

class.o:	class.cpp Circle.h
	$(CC) $(CFLAGS) -c class.cpp

clean:
	$(RM) circle *.o *~
