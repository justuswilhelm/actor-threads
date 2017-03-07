CC=clang
CXXFLAGS=-std=c++14 -Wall -Werror

all: main

main: main.o actor.o registry.o
	c++ $^ -o $@ $(CXXFLAGS)

main.o: actor.o registry.o

clean:
	rm -f *.o
	rm -f main
