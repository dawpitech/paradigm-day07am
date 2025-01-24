/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Borg.cpp
*/

#include "Borg.hpp"

#include <iostream>

Borg::Ship::Ship()
{
    std::cout << ""
        "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\n"
        "Your biological characteristics and technologies will be assimilated.\n"
        "Resistance is futile.\n";
}

void Borg::Ship::setupCore(WarpSystem::Core* core)
{
    this->_core = core;
}

void Borg::Ship::checkCore()
{
    std::string msg;
    if (this->_core == nullptr)
        return;
    if (this->_core->checkReactor())
        msg = "Everything is in order.";
    else
        msg = "Critical failure imminent.";
    std::cout << msg << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp > this->_maxWarp)
        return false;
    if (d == this->_location)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = d;
    return true;
}

bool Borg::Ship::move(int warp)
{
    if (warp > this->_maxWarp)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}

bool Borg::Ship::move(Destination d)
{
    if (d == this->_location)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = d;
    return true;
}

bool Borg::Ship::move()
{
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}
