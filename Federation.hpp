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
    #include "Destination.hpp"
    #include "Borg.hpp"

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
                explicit Ship(int length, int width, std::string name,
                    short maxWarp, int torpedo = 0);
                void setupCore(WarpSystem::Core* core);
                void checkCore();
                void promote(Captain *captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                int getShield() { return this->_shield; }
                void setShield(int shield) { this->_shield = shield; }
                int getTorpedo() { return this->_photonTorpedo; }
                void setTorpedo(int torpedo) { this->_photonTorpedo = torpedo; }
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);

            protected:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core* _core;
                Captain* _captain;
                Destination _home = EARTH;
                Destination _location = _home;
                int _shield = 100;
                int _photonTorpedo;
        };
    }

    class Ship
    {
    public:
        explicit Ship(int length, int width, std::string name);
        void setupCore(WarpSystem::Core* core);
        void checkCore();
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        WarpSystem::Core* getCore() { return this->_core; }

    protected:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp = 1;
        WarpSystem::Core* _core;
        Destination _home = VULCAN;
        Destination _location = _home;
    };
}
#endif //FEDERATION_HPP
