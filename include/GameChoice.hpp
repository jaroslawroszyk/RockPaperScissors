#pragma once

namespace choice
{
    enum class TopLvlChoice
    {
        PLAY_GAME = 1,
        EXIT_GAME = 2
    };
    // constexpr auto playGame = TopLvlChoice::PLAY_GAME;
    // constexpr auto exitGame = TopLvlChoice::EXIT_GAME;

    TopLvlChoice getTopLvlChoice();
}

