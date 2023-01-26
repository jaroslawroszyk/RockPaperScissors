#include "GameChoice.hpp"
#include <iostream>

namespace choice
{
    TopLvlChoice getTopLvlChoice()
    {
        std::cout << "1) play 2) exit \n";
        int choice;
        std::cin >> choice;
        if (std::cin) // Reading was successful.
        {
            switch (choice)
            {
            case 1:
                return TopLvlChoice::PLAY_GAME;
            case 2:
                return TopLvlChoice::EXIT_GAME;
            default:
                std::cout << "You made an invalid choice. Try again...\n";
            }
            return getTopLvlChoice();
        }
        else
        {
            std::cout << "You made an invalid choice. Try again...\n";

            // Clear the stream
            std::cin.clear();

            // Skip bad input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Try again.
            return getTopLvlChoice();
        }
        //     int choice = 1;
        //     std::cout << " 1) play 2) exit \n";
        //     std::cin >> choice;
        //     switch (choice)
        //     {
        //     case 1:
        //         return playGame;
        //     case 2:
        //         return exitGame;
        //     default:
        //         throw "Ops";
        //     }
        //     return getTopLvlChoice();
    }
}


