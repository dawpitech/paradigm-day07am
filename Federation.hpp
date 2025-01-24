/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Federation.hpp
*/

#ifndef FEDERATION_HPP
    #define FEDERATION_HPP

    #include <string>

    #include "WarpSystem.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Ship
        {
            public:
                explicit Ship(int length, int width, std::string name, short maxWarp);
                void setupCore(WarpSystem::Core* core);
                void checkCore();

            protected:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core* _core;
        };
    }

    class Ship
    {
    public:
        explicit Ship(int length, int width, std::string name);
        void setupCore(WarpSystem::Core* core);
        void checkCore();

    protected:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp = 1;
        WarpSystem::Core* _core;
    };
}
#endif //FEDERATION_HPP
