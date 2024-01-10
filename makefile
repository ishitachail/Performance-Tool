#this is a makefile for performance tool project

$(CC)=gcc
all: clean final
final: main.o data.o sortstrategy.o
	$(CC) -std=c++11 main.o data.o sortstrategy.o -o program1 -lstdc++
main.o: main.cpp
	$(CC) -std=c++11 -g -c main.cpp
data.o: data.cpp data.h
	$(CC) -std=c++11 -g -c data.cpp
sortstrategy.o: sortstrategy.cpp sortstrategy.h
	$(CC) -std=c++11 -g -c sortstrategy.cpp
clean:
	rm *.o program1
