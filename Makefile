CXX = g++
CXXFLAGS = -Wall -std=c++11

all: main

main: main.o calc_a.o calc_b.o
	$(CXX) $(CXXFLAGS) -o main main.o calc_a.o calc_b.o

main.o: main.cpp calc_a.h calc_b.h
calc_a.o: calc_a.cpp calc_a.h
calc_b.o: calc_b.cpp calc_b.h

clean:
	rm -f *.o main
