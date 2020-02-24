# Make file for task 4 of Lab 5
# Created for linux

# Define the compiler as g++ 
CXX=g++ 
XFlags= -g -Wall

# This defines the windows version to cross compile
WINXX=i686-w64-mingw32-g++-win32
# Default task defined
default: task4.out

win: Test.o Movie.o Shelf.o
	$(WINXX) -o task4.exe Test.o Movie.o Show.o Shelf.o

# Define default output task
task4.out: Test.o Movie.o Shelf.o Show.o
	$(CXX) $(XFlags) -o task4.out Test.o Movie.o Show.o

Test.o: Test.cpp
	$(CXX) $(XFlags) -c Test.cpp

Movie.o: Movie.cpp Movie.h Show.h Show.o
	$(CXX) $(XFlags) -c Movie.cpp

Show.o: Show.cpp Show.h
	$(CXX) $(XFlags) -c Show.cpp

clean: 
	$(RM) task4.out *.o *~