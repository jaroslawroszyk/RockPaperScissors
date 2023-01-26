#pragma once
#include <iostream>
#include "Player.hpp"

namespace play
{
    class Game
    {
    public:
        void play_game();

    private:
        void play_game(Player &player1, Player &player2);

        void play_human_vs_computer();

        void play_computer_vs_computer();

        void pick_round_winner(Player &player1, Player &player2);
        void print_winner(Player &player1, Player &player2);

        bool is_game_over(Player &player1, Player &player2);
    };
} // namespace Play
