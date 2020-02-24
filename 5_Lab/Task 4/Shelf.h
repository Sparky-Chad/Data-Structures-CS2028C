#ifndef SHELF_H
#define SHELF_H

#include "Show.h"
#include <exception>

using namespace std;

// Global Max Size Variable
const int MAX_SIZE = 10;

template <class T> class Shelf {
public:

    // Default Constructor
    Shelf();

    // Adds a game to the end
    void add_game(T *in);
    // Gets a game from end of the index
    T remove_game();
    // returns number of board games in the shelf
    int get_games_stored() { return games_stored; }

    // Declaring them statically ensures they can run in any
    // instance without need for declaration of templat
    class ShelfFullException
    { };
    class ShelfEmptyException
    { };
    // Excpetions
private:

    T my_show[MAX_SIZE];
    int games_stored;

};

#endif

