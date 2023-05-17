// #pragma once

#include "Team.hpp"

namespace ariel{

    class Team2: public Team{

        public: 
            Team2(Character* leader):Team(leader) {}
            virtual void attack(Team*) override;
            virtual void print() override; 
    };
}