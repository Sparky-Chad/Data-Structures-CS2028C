# Make file for task 4 of Lab 5
# Created for linux

# Define the compiler as g++ 
CXX=g++ 
XFlags= -g -Wall

# This defines the windows version to cross compile
WINXX=i686-w64-mingw32-g++-win32
# Default task defined
default task4.out


# Define default output task
task4.out: Test.o Movie.o Shelf.o
	$(CXX) $(XFlags) -o task4.out Movie.o Show.o Shelf.o

Test.o: Test.cpp
	$(CXX) $(XFlags) -c Test.cpp

Show.o: Movie.cpp Movie.h
	$(CXX) $(XFlags) -c Movie.cpp

Shelf.o: Shelf.cpp Shelf.h
	$(CXX) $(XFlags) -c Shelf.cpp