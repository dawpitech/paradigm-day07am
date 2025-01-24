/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Admiral.cpp
*/

#include "Admiral.hpp"

#include <format>
#include <iostream>

Federation::Starfleet::Admiral::Admiral(std::string name)
{
    this->_name = name;
    std::cout << std::format(""
        "Admiral {} ready for action.\n",
        this->_name);
    this->movePtr = &Ship::move;
    this->firePtr = &Ship::fire;
}

bool Federation::Starfleet::Admiral::move(Ship* ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}

void Federation::Starfleet::Admiral::fire(Ship* ship, Borg::Ship* target)
{
    std::cout << format("On order from Admiral {}:\n", this->_name);
    return (ship->*firePtr)(target);
}
