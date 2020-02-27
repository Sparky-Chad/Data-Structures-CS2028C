#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack {
    public:
    // Constructors for the stack, these will input a variable which
    // will create the size of the array
    Stack(int in)
    {
        max_size = in;
        size = 0;
        arr = new T*[in];
    }
    // Destructor will handle cleaning the entirty of the array of pointers
    ~Stack()
    {
        empty();
        // Call empty to activate the destructor
    }

    // Class member functions



    void empty();

    void push(T*);

    T* pop();
    
    T* top();

    int length();


    // Exception classes
    class StackOverflowException 
    {};
    class StackUnderflowException
    {};

    private:
    int size;
    // Create a pointer to the array the stack will handle to enable dynamic
    // array creation and handling
    T** arr;
    // Keeps the value of the top of the stack

    int max_size;

};

#endif


// Implementation in h file due to template class status
template <class T>
void Stack<T>::push(T*){
    if (size == max_size){
		throw StackOverflowException();
	};

	arr[size] = T*;

	size = size + 1;

}


template <class T>
void Stack<T>::empty(){
    if (size == 0){
		throw StackUnderflowException();
	};

	for (int i; i < size;i++){    int top;

        delete arr[i];
	}
	
	top = 0;
	size = 0;
    
 }




template <class T>
T* Stack<T>::pop(){
    if(size == 0){
		throw StackUnderflowException();
	};

	T* temp = arr[size-1];

	arr.pop();
	size = size - 1;
	return temp;
}

template <class T>
T* Stack<T>::top(){
    if(size == 0){
		throw StackUnderflowException();
	};
	return arr[size];
}

template <class T>
int Stack<T>::length(){
	return size;

}





