#include "Character.hpp"

namespace ariel{
        
        bool Character::isAlive(){return false;} // return if hit_point are left
        double Character::distance(const Character&){return 0.0;} // distance from different character
        void Character::hit(int num_of_hits){return;}// got hit. reduce life points 
        string Character::getName(){return "name";} 
        Point Character::getLocation(){return Point(0.0,0.0);} 
        string Character::print(){return "Daniel";} 
        int Character::getHitPoints(){return 0;}   
        
}