# Make file to create the coresponding file 
# 
# Define the compiler and the compiler flags
CXX = g++
CXXFLAGS = -g -Wall

# This is for compiling the windows version
WINCXX = i686-w64-mingw32-g++-win32
# Default program to run
# .out format is automatically ignored by git
default: task2.out

# Create the executable file
# Links the objects into the executable

task2.out: Shelf.o Show.o Test.o 
	$(CXX) $(CXXFLAGS) -o task2.out Test.o Shelf.o Show.o

# Sets up the filesystem into .exe format

task1.exe: Test.cpp Test.h Show.cpp Show.h Shelf.cpp Shelf.h
	$(WINCXX) $(CXXFLAGS) -o task1.exe Test.cpp Show.cpp Shelf.cpp

# Creating the object file for Test requires the test and h files from the others
Test.o: Test.cpp Show.h Shelf.h
	$(CXX) $(CXXFLAGS) -c Test.cpp

# Creating Show object file
Show.o: Show.cpp Show.h
	$(CXX) $(CXXFLAGS) -c Show.cpp

# Create the Shelf object file
Shelf.o: Shelf.cpp Shelf.h
	$(CXX) $(CXXFLAGS) -c Shelf.cpp

# Clean filesystem of .out files and .o files
clean:
	$(RM) task2.out *.o *~
