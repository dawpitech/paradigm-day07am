/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** WarpSystem.hpp
*/

#ifndef WARPSYSTEM_HPP
    #define WARPSYSTEM_HPP
namespace WarpSystem
{
    class QuantumReactor
    {
        public:
            bool isStable() { return _stability; }
            void setStability(bool stability);

        protected:
            bool _stability = true;
    };

    class Core
    {
        public:
            explicit Core(QuantumReactor* coreReactor);
            QuantumReactor* checkReactor() { return _coreReactor; }

        protected:
            QuantumReactor *_coreReactor;
    };
}
#endif //WARPSYSTEM_HPP
