/*
** EPITECH PROJECT, 2025
** paradigm-day07am
** File description:
** Exam.hpp
*/

#ifndef EXAM_HPP
    #define EXAM_HPP
class Exam
{
    public:
        inline static bool cheat = false;
        explicit Exam(...);
        void (e)(int nb_ships);
        void start(int nb_ships);
        void (Exam::*kobayashiMaru)(int nb_ships);
        bool isCheating();
};
#endif //EXAM_HPP
