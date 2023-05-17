#pragma once

#include "Team.hpp"

namespace ariel{

    class SmartTeam: public Team{
        public:
            SmartTeam(Character* leader):Team(leader) {}
            virtual void attack(Team*) override;
            virtual void print() override; 
    };
}