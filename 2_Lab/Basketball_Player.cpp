
/*  
*   
*   Implementation of Basketball_Player.h
*
*/

#include "Basketball_Player.h"
#include "string.h"
using namespace std;


Basketball_Player::Basketball_Player() {
    shots = {0,0};
    passes = {0,0};
    name = "";
}
Basketball_Player::Basketball_Player(string name) {
    name = "";
    if (this->shots.made == 0 && this->passes.made[0]) {
        
    }
}