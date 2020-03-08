// Testing the capabilities of the queue class
#include "Queue.h"
#include <iostream>

int main() {

    // Create an instance of queue with ints
    Queue<int> tester = Queue<int>(10);

    // declare some test variables
    int a = 5, b = 6, c = 7;
    int* pa = new int(a);
    int* pb = new int(b);
    int* pc = new int(c);

    std::cout << "a = " << a << "b = " << b << "c = " << c << std::endl;

    tester.enque(pa);
    tester.enque(pb);
    tester.enque(pc);
    std::cout<<std::endl << "&a:  " << &a << std::endl << "peek: " << tester.peek() << std::endl;
    a = 7;


    std::cout<< "a = 7, peek = " << *(tester.peek()) << std::endl;

    return 0;
}