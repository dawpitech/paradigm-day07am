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
        class Ensign
        {
            public:
                explicit Ensign(std::string name);

            protected:
                std::string _name;
        };

        class Captain
        {
        public:
            explicit Captain(std::string name) { this->_name = name; }
            std::string getName() { return _name; }
            int getAge() { return _age; }
            void setAge(int age) { this->_age = age; }

        protected:
            std::string _name;
            int _age = -1;
        };

        class Ship
        {
            public:
                explicit Ship(int length, int width, std::string name, short maxWarp);
                void setupCore(WarpSystem::Core* core);
                void checkCore();
                void promote(Captain *captain);

            protected:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core* _core;
                Captain* _captain;
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
