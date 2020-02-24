

using namespace std;

#include <string>
#include "Shelf.h"
#include "Show.h"

Shelf::Shelf(){
	
	for (int i=0;i<MAX_SIZE;i++){
		my_show[i] = Show();
	};
	
	games_stored = 0;
		
}

void Shelf::add_game(Show *in){
	
	if(games_stored == 10){
		throw ShelfFullException();
	};
		
	
	my_show[games_stored] = *in;

	games_stored = games_stored +1;
	
}

Show Shelf::remove_game(){
	if(games_stored == 0){
		throw ShelfEmptyException();
	};
	games_stored = games_stored -1;
	return my_show[games_stored];

}






