/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** ex05.cpp
*/

#include "Exam.hpp"

int main()
{
    Exam e = Exam(&Exam::cheat);

    e.kobayashiMaru = &Exam::start;
    (e.*e.kobayashiMaru)(3);
    Exam::cheat = true;
    if (e.isCheating())
        (e.*e.kobayashiMaru)(4);
}
