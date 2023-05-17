#pragma once

#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"

#include <vector>


namespace ariel{

    class Team{
        private:
            vector<Character*> team;
            Character* leader; 

        public: 

            Team(Character* leader):leader(leader){} 
        
            void add(Character*); 
            virtual void attack(Team*);
            int stillAlive(); 
            virtual void print(); 
    };

}