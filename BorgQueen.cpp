/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** BorgQueen.cpp
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen()
{
    this->movePtr = &Ship::move;
    this->firePtr = &Ship::fire;
    this->destroyPtr = &Ship::fire;
}

bool Borg::BorgQueen::move(Ship* ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}

void Borg::BorgQueen::fire(Ship* ship, Federation::Starfleet::Ship* target)
{
    return (ship->*firePtr)(target);
}

void Borg::BorgQueen::destroy(Ship* ship, Federation::Ship* target)
{
    return (ship->*destroyPtr)(target);
}
