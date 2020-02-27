#ifndef LIST_H
#define LIST_H

struct Node{
    char data;
    Node* next;
};

class List {
    private:
        Node* head;

    public:
        void Insert(char letter);
        char Remove(char key);
        int Length();
        void MakeEmpty();

        class ListEmptyException
        {
        };
        class ValueNotFoundException 
        {
        };
};
#endif
