CC=g++
CXXFLAGS=-std=c++11
all:
	$(CC) $(CXXFLAGS) -Wfatal-errors *.cpp
