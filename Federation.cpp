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
    std::cout << std::format(""
    "USS {}: The core is {} at the time.\n",
    this->_name, stabilityToStr(this->_core->checkReactor()->isStable()));
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
    std::cout << std::format(""
    "{}: The core is {} at the time.\n",
    this->_name, stabilityToStr(this->_core->checkReactor()->isStable()));
}
