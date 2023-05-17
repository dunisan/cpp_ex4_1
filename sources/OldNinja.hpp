#pragma once 

#include "Team.hpp"
#include "Ninja.hpp"

namespace ariel{

    class OldNinja: public Ninja{
        public: 
            OldNinja(const string& name, const Point location): Ninja(name,location,8,150){}
    }; 

}