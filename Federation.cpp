/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Federation.cpp
*/

#include <iostream>
#include <format>

#include "Federation.hpp"

static std::string stabilityToStr(const bool stability)
{
    if (stability)
        return "stable";
    return "unstable";
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << std::format("Ensign {}, awaiting orders.\n", name);
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    std::cout << std::format(""
        "The ship USS {} has been finished.\n"
        "It is {} m in length and {} m in width.\n"
        "It can go to Warp {}!\n",
        name, length, width, maxWarp);
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_core = nullptr;
    this->_captain = nullptr;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core* core)
{
    this->_core = core;
    std::cout << std::format(""
        "USS {}: The core is set.\n",
        this->_name);
}

void Federation::Starfleet::Ship::checkCore()
{
    if (this->_core->checkReactor() == nullptr)
        return;
    std::cout << std::format(""
        "USS {}: The core is {} at the time.\n",
    this->_name, stabilityToStr(this->_core->checkReactor()->isStable()));
}

void Federation::Starfleet::Ship::promote(Captain* captain)
{
    if (captain == nullptr)
        return;
    this->_captain = _captain;
    std::cout << std::format(""
        "{}: I'm glad to be the captain of the USS {}.\n",
        captain->getName(), this->_name);
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
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

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp > this->_maxWarp)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d == this->_location)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = d;
    return true;
}

bool Federation::Starfleet::Ship::move()
{
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    std::cout << std::format(""
        "The independent ship {} just finished its construction.\n"
        "It is {} m in length and {} m in width.\n",
        name, length, width);
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_core = nullptr;
}

void Federation::Ship::setupCore(WarpSystem::Core* core)
{
    this->_core = core;
    std::cout << std::format(""
        "{}: The core is set.\n",
        this->_name);
}

void Federation::Ship::checkCore()
{
    if (this->_core->checkReactor() == nullptr)
        return;
    std::cout << std::format(""
    "{}: The core is {} at the time.\n",
    this->_name, stabilityToStr(this->_core->checkReactor()->isStable()));
}

bool Federation::Ship::move(int warp, Destination d)
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

bool Federation::Ship::move(int warp)
{
    if (warp > this->_maxWarp)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}

bool Federation::Ship::move(Destination d)
{
    if (d == this->_location)
        return false;
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = d;
    return true;
}

bool Federation::Ship::move()
{
    if (this->_core == nullptr || this->_core->checkReactor() == nullptr ||
        !this->_core->checkReactor()->isStable())
        return false;
    this->_location = this->_home;
    return true;
}
