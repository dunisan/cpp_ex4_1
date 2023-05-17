#pragma once 

#include "Point.hpp"
#include "Character.hpp"

namespace ariel{

    class Cowboy: public Character{
        private:
            int num_of_bullets;

        public: 
            Cowboy(const string& name, const Point location):Character(name,location, 110), num_of_bullets(6){}
            void shoot(const Character*); 
            bool hasBullets(); 
            void reload(); 

            int getNumOfBullets(); 
    }; 

}