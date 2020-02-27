
# Makefile for lab 6

CXX = g++
XFlag = -g -Wall


queue_test: Test_Queue.cpp Queue.h
	$(CXX) $(XFlag) -o qtest.out Test_Queue.cpp

stack_test: Test_Queue.cpp Queue.h
	$(CXX) $(XFlag) -o qtest.out Test_Stack.cpp


clean:
	$(RM) -f *.o *.out ~*
