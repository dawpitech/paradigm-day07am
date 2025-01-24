/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Exam.cpp
*/

#include <iostream>
#include <format>

#include "Exam.hpp"

bool Exam::isCheating()
{
    return cheat;
}

Exam::Exam(...)
{
    this->kobayashiMaru = nullptr;
}

void Exam::start(int nb_ships)
{
    std::cout << "[The exam is starting]\n";
    std::cout << std::format(""
        "{} Klingon vessels appeared out of nowhere.\n",
        nb_ships);
    std::cout << "they are fully armed and shielded\n";
    if (cheat)
        std::cout << "What the... someone changed the parameters of the exam !\n";
    else
        std::cout << "This exam is hard... you lost again.\n";
}
