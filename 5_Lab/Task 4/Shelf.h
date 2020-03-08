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
    void add_game(T* in);
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

// Must include class template declarations as the linker must
// be able to link implicit template classes defined on compile time
template <class T>
Shelf<T>::Shelf(){
	
	for(int i = 0; i < MAX_SIZE; i++) {
		my_show[i] = T();
		// calls the default specifier of the class identified
	}
    games_stored = 0;
	   	 
}

template <class T>
void Shelf<T>::add_game(T* in){
	
	if(games_stored == 10){
		throw ShelfFullException();
	};
	   	  
	my_show[games_stored] = *in;

    games_stored = games_stored +1;
	
}

template <class T>
T Shelf<T>::remove_game(){
	if(games_stored == 0){
		throw ShelfEmptyException();
	};
    games_stored = games_stored -1;
    return my_show[games_stored];

}