/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Admiral.hpp
*/

#ifndef ADMIRAL_HPP
    #define ADMIRAL_HPP

    #include <string>

    #include "Federation.hpp"

namespace Federation::Starfleet
{
    class Admiral
    {
    public:
        explicit Admiral(std::string name);
        bool (Ship::*movePtr)(Destination d);
        void (Ship::*firePtr)(Borg::Ship* target);
        bool move(Ship* ship, Destination dest);
        void fire(Ship* ship, Borg::Ship* target);

    protected:
        std::string _name;
    };
}
#endif //ADMIRAL_HPP
