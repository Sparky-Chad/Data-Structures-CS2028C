#ifndef SHELF_H
#define SHELF_H

#include "Show.h"
#include <exception>

using namespace std;

// Global Max Size Variable
const int MAX_SIZE = 10;

class Shelf {
public:

    // Default Constructor
    Shelf();

    // Adds a game to the end
    void add_game(Show *in);
    // Gets a game from end of the index
    Show remove_game();
    // returns number of board games in the shelf
    int get_games_stored() { return games_stored; }

    class ShelfFullException
    { };
    class ShelfEmptyException
    { };
    // Excpetions
private:

    Show my_show[MAX_SIZE];
    int games_stored;

};

#endif

