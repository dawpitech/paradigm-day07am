/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** ex04.cpp
*/

#include "Federation.hpp"
#include "Admiral.hpp"

int main()
{
    Federation::Starfleet::Ship UssJanissary(289, 132, "Janissary", 6, 20);
    Federation::Starfleet::Admiral Pierce("Pierce");
    Borg::Ship Cube(25);

    Pierce.fire(&UssJanissary, &Cube);
    Pierce.fire(&UssJanissary, &Cube);

    return 0;
}
