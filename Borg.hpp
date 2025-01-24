/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP
    #define BORG_HPP

    #include "WarpSystem.hpp"
    #include "Destination.hpp"

namespace Borg
{
    class Ship
    {
        public:
            explicit Ship();
            void setupCore(WarpSystem::Core* core);
            void checkCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();

        protected:
            int _side = 300;
            short _maxWarp = 9;
            WarpSystem::Core* _core;
        Destination _home = UNICOMPLEX;
        Destination _location = _home;
    };
}
#endif //BORG_HPP
