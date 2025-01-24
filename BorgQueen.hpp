/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** BorgQueen.hpp
*/

#ifndef BORGQUEEN_HPP
    #define BORGQUEEN_HPP

    #include "Borg.hpp"

namespace Borg
{
    class BorgQueen
    {
        public:
            BorgQueen();
            bool (Ship::*movePtr)(Destination d);
            void (Ship::*firePtr)(Federation::Starfleet::Ship* target);
            void (Ship::*destroyPtr)(Federation::Ship* target);
            bool move(Ship* ship, Destination dest);
            void fire(Ship* ship, Federation::Starfleet::Ship* target);
            void destroy(Ship* ship, Federation::Ship* target);
    };
}
#endif //BORGQUEEN_HPP
