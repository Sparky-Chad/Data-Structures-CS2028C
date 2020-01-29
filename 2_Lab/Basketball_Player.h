#ifndef BASKETBALL_PLAYER_H
#define BASKETBALL_PLAYER_H

/*
*   
*   Basketball Player Class
*   
*   
*   
*/
#include <string>

struct Statistic {
    int attempted;
    int made;
};

class Basketball_Player {

public:

    // Default Constructor inits values as blank
    Basketball_Player();
    // Constructor Fills the name
    Basketball_Player(std::string);
    // Constructor Fills name and stats
    Basketball_Player(std::string, Statistic, Statistic);
    // Copy Constructor
    Basketball_Player(const Basketball_Player&);
    
    // Member Functions
    // Pass the ball function
    bool pass_ball();
    // Taking a shot function
    int take_shot(int);

    // Getters and Setters
    void setName(std::string name) {
        this->name = name;
    }
    std::string getName() {
        return this->name;
    }
    void set_shot_stats(Statistic stats) {
        this->shots = stats;
    }
    Statistic get_shot_stats() {
        return shots;
    }



private:
    std::string name;
    Statistic shots;
    Statistic passes;

};

#endif