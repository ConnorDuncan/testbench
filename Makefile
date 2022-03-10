CXX = g++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES = main

all: ${BINARIES}

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

clean:
	rm -f ${BINARIES} *.o
