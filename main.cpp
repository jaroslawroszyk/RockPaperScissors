#include "Player.hpp"
#include "GameChoice.hpp"
#include "Game.hpp"

auto main() -> int
{
    play::Game game;
    choice::TopLvlChoice choice;
    while (choice::getTopLvlChoice() != choice::TopLvlChoice::EXIT_GAME)
    {
        game.play_game();
    }
    return 0;
}