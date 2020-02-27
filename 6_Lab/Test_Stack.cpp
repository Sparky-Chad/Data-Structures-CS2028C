#include "Stack.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	int Max = 10;

	Stack<int> myStack = Stack<int>(Max);

	int A = 1;
	int B = 2;
	int C = 3;
	int D = 4;

	myStack.push(&A);
	myStack.push(&B);
	myStack.push(&C);
	myStack.push(&D);




	for (int i = 0; i < Max; i++){
		cout << myStack.pop() << endl;
	};
}


/*

> Executing task in folder Data_Structures: /usr/bin/g++ -g /home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Test_Stack.cpp -o /home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Test_Stack.out <

In file included from /home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Test_Stack.cpp:1:
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h: In member function ‘void Stack<T>::push(T*)’:
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h:64:16: error: expected primary-expression before ‘*’ token
  arr[size] = T *;
                ^
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h:64:17: error: expected primary-expression before ‘;’ token
  arr[size] = T *;
                 ^
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h: In instantiation of ‘T* Stack<T>::pop() [with T = int]’:
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Test_Stack.cpp:29:23:   required from here
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h:98:6: error: request for member ‘pop’ in ‘((Stack<int>*)this)->Stack<int>::arr’, which is of non-class type ‘int**’
  arr.pop();
  ~~~~^~~
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h: In instantiation of ‘void Stack<T>::empty() [with T = int]’:
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h:18:9:   required from ‘Stack<T>::~Stack() [with T = int]’
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Test_Stack.cpp:9:37:   required from here
/home/lapech/Programming/Working_Classes/Data_Structures/6_Lab/Stack.h:82:6: error: invalid use of member function ‘T* Stack<T>::top() [with T = int]’ (did you forget the ()’ ?)
  top = 0;
  ~~~~^~~
  */