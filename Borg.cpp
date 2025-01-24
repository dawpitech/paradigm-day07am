/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Borg.cpp
*/

#include "Borg.hpp"
#include "Federation.hpp"

#include <format>
#include <iostream>

Borg::Ship::Ship(int weaponFrequency, short repair)
{
    this->_weaponFrequency = weaponFrequency;
    this->_repair = repair;
    this->_core = nullptr;
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

void Borg::Ship::fire(Federation::Starfleet::Ship* target)
{
    if (target == nullptr)
        return;
    target->setShield(target->getShield() - this->_weaponFrequency);
    std::cout << std::format(""
        "Firing on target with {}GW frequency.\n",
        this->_weaponFrequency);
}

void Borg::Ship::fire(Federation::Ship* target)
{
    if (target == nullptr || target->getCore() == nullptr ||
        target->getCore()->checkReactor() == nullptr)
        return;
    target->getCore()->checkReactor()->setStability(false);
    std::cout << std::format(""
        "Firing on target with {}GW frequency.\n",
        this->_weaponFrequency);
}

void Borg::Ship::repair()
{
    if (this->_repair == 0) {
        std::cout << "Energy cells depleted, shield weakening.\n";
        return;
    }
    std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions.\n";
    this->_repair -= 1;
    this->_shield = 100;
}
