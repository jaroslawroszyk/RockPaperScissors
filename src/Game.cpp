#include "Game.hpp"
#include "GameChoice.hpp"
#include "Mode.hpp"

namespace play
{
    void Game::play_game()
    {
        mode::PlayMode choice = mode::getPlayMode();
        if (choice == mode::normalMode)
        {
            play_human_vs_computer();
        }
        else
        {
            play_computer_vs_computer();
        }
    }

    void Game::play_game(Player &player1, Player &player2)
    {
        do
        {
            player1.play();
            player2.play();
            std::cout << player1.name << " chose : " << player1.hand << std::endl;
            std::cout << player2.name << " chose : " << player2.hand << std::endl;
            if (player1.hand == player2.hand)
            {
                std::cout << "tie!";
                continue;
            }
            pick_round_winner(player1, player2);

        } while (not is_game_over(player1, player2));
        print_winner(player1, player2);
    }

    void Game::play_human_vs_computer()
    {
        std::string name{};
        std::cout << "Enter your name: ";
        std::cin >> name;

        HumanPlayer humanPlayer(name);
        ComputerPlayer computerPlayer("Evil Enemy");
        play_game(humanPlayer, computerPlayer);
    }

    void Game::play_computer_vs_computer()
    {
        ComputerPlayer machineOne("Evil machine 1");
        ComputerPlayer machineTwo("Evil machine 2");
        play_game(machineOne, machineTwo);
    }

    void Game::pick_round_winner(Player &player1, Player &player2)
    {
        if ((player1.hand == "rock" && player2.hand == "scissors") ||
            (player1.hand == "scissors" && player2.hand == "paper") ||
            (player1.hand == "paper" && player2.hand == "rock"))
        {
            player1.printWinningMsg();
            player1.won += 1;
        }
        else
        {
            player2.printWinningMsg();
            player2.won += 1;
        }
    }

    void Game::print_winner(Player &player1, Player &player2)
    {
        Player &winner = (player1.won == 2) ? player1 : player2;
        std::cout << "Congratulations, " << winner.name << ". You win the game!\n";
    }

    bool Game::is_game_over(Player &player1, Player &player2)
    {
        return player1.won == 2 or player2.won == 2;
    }

} // namespace Play