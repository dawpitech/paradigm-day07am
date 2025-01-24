/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** WarpSystem.cpp
*/

#include "WarpSystem.hpp"

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor* coreReactor)
{
    this->_coreReactor = coreReactor;
}
