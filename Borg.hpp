/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP
    #define BORG_HPP

#include <Federation.hpp>

    #include "WarpSystem.hpp"
    #include "Destination.hpp"

namespace Borg
{
    class Ship
    {
        public:
            explicit Ship(int weaponFrequency = 20, short repair = 3);
            void setupCore(WarpSystem::Core* core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield() { return this->_shield; }
            void setShield(int shield) { this->_shield = shield; }
            int getWeaponFrequency() { return this->_weaponFrequency; }
            void setWeaponFrequency(int frequency) { this->_weaponFrequency = frequency; }
            short getRepair() { return this->_repair; }
            void setRepair(short repair) { this->_repair = repair; }
            void fire(Federation::Starfleet::Ship* target);
            void fire(Federation::Ship* target);
            void repair();

        protected:
            int _side = 300;
            short _maxWarp = 9;
            WarpSystem::Core* _core;
            Destination _home = UNICOMPLEX;
            Destination _location = _home;
            int _shield = 100;
            int _weaponFrequency;
            short _repair;
    };
}
#endif //BORG_HPP
