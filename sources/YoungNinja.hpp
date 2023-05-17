#pragma once 

#include "Team.hpp"

namespace ariel{

    class YoungNinja: public Ninja{
        public: 
            YoungNinja(const string& name, const Point location): Ninja(name,location,14,100){}
    }; 

}