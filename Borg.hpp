/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP
    #define BORG_HPP

    #include "WarpSystem.hpp"

namespace Borg
{
    class Ship
    {
        public:
            explicit Ship();
            void setupCore(WarpSystem::Core* core);
            void checkCore();

        protected:
            int _side = 300;
            short _maxWarp = 9;
            WarpSystem::Core* _core;
    };
}
#endif //BORG_HPP
