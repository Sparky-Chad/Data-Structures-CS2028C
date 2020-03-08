#include "List.h"

using namespace std;

void List::Insert(char letter) {
    // This will call the next node pointer to the current head
    // then set the head pointer to nnode
    Node *nnode = new Node;
    nnode->data = letter;
    nnode->next = head;
    head = nnode;
}

    // The position in this stack type linked list 
    // is unconstant, therefore the index is meaningless
    // due to the fact that it will change later
char List::Remove(char key) {
    // Check if the list is empty
    if(head == nullptr) {
        throw ListEmptyException();
    }
    // Declare temp point to search for key
    Node* temp = head;
    while(temp->next->next != nullptr)
    {
        if(temp->next->data == key) {
            // Gives a temp var for the data then removes the 
            char out = temp->data;
            Node *tempnode = temp->next->next;
            delete temp->next;
            temp = tempnode;
            // return ends the statement
            return out;
        }
        
    }
    // This at end as the while loop ends on a nullptr
    // rather than on a value found
    throw ValueNotFoundException();
}


int List::Length() {
    int output = 0;
    if(head == nullptr) {
        throw ListEmptyException();
    } 

    
}
