#include "Player.hpp"
#include <string>
#include <iostream>

void HumanPlayer::play()
{
    std::cout << "Chose: rock,paper or scissors or die :) \n";
    std::cin >> hand;
}
void HumanPlayer::printWinningMsg() const
{
    std::cout << name << " WIN! \n";
}

void ComputerPlayer::play()
{
    //todo: use vector
    std::string choices[3]{"rock", "paper", "scissors"};
    hand = choices[std::rand() % 3]; //
}

void ComputerPlayer::printWinningMsg() const
{
    std::cout << name << " PC WIN u'll die! \n";
}
