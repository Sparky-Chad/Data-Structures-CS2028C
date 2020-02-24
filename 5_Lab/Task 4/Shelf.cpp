

using namespace std;

#include <string>
#include "Shelf.h"
#include "Show.h"


template <class T>
Shelf<T>::Shelf(){
	
	for(int i = 0; i < MAX_SIZE; i++) {
		my_show = T();
		// calls the default specifier of the class identified
	}
    games_stored = 0;
	   	 
}

template <class T>
void Shelf<T>::add_game(T *in){
	
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






