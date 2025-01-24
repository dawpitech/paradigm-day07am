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
