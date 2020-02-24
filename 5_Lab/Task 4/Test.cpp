// Tester for the Shelf class

#include <string>
#include <iostream>
#include "Shelf.h"
#include "Show.h"
#include "Movie.h"
// The Show class should be seen as a defacto game
using namespace std;
//use gdb?
int main() {
    // Use the movie class to show the template power
    // Create a shelf object for use
    Shelf<Movie> shelf = Shelf<Movie>();
    // Pointer to handle games (Show class)
    Movie* game = nullptr;

    bool out = true;
    while(out) {

        // Create a choice variable
        int choice = -1;
        // Run input untill valid choice
        while(choice < 1 || choice > 4) {
            choice = -1;
            cout << "Press 1 to add a board game to shelf" << endl;
            cout << "Press 2 to remove a board game from shelf" << endl;
            cout << "Press 3 to see how many board games are on shelf" << endl;
            cout << "Press 4 to exit" << endl;
            cout << "Choice: \n";
            cin >> choice;
            cin.ignore();
        }
        // Temp title string
        string title = "";
        // Temp Description string
        string descrition = "";
        // rating choice 
        switch (choice) {

            // Add game Case
            case 1:
                cout << "Title for game: \n";
                getline(cin, title);
                cout << "Description for game: \n";
                getline(cin, descrition);
                //make a new show from this information
                game = new Movie(3.2, title, descrition);
                //Added with task 3
                try {
                    //add game to shelf
                    shelf.add_game(game);
                } catch(Shelf<Movie>::ShelfFullException) {
                    cout << endl << "Shelf is full" << endl;
                }

                // Remove the new Show
                delete game;
                break;
            
            // Remove game case
            case 2:
                // point to a new instance of Show
                game = new Show();
                // set that instance to the removed show
				try{
                    *game = shelf.remove_game();
                    // print out that show
                    cout << "Game details: \n";
                    game->print_details();
                    game->play();
                    // remove game instance
                    delete game;
				} catch(Shelf<Movie>::ShelfEmptyException) {
                    cout << "Shelf is empty" << endl;
                }
				

                break;

            //see number of games case
            case 3:
                cout << "Number of games " << shelf.get_games_stored() << endl;
                break;

            // Exit game
            case 4:
                out = false;
                break;
        }
        cout << endl;

    }


    return 0;
}