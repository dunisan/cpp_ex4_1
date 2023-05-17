#pragma once 

#include "Team.hpp"
#include "Ninja.hpp"


namespace ariel{

    class TrainedNinja: public Ninja{
        public: 
            TrainedNinja(const string& name, const Point location): Ninja(name,location,12,120){}
    }; 

}