#pragma once
#include <string>
#include <iostream>

// if pc win 10 runds program execute a devil program :)

class Player
{
public:
    Player(const std::string &name) : name(name), won(0) {}
    virtual ~Player() {}
    virtual void play() = 0;
    virtual void printWinningMsg() const = 0;

    std::string hand;
    int won;
    std::string name;
};

class HumanPlayer : public Player
{
public:
    HumanPlayer(const std::string &name) : Player(name) {}

    void play() override;
    void printWinningMsg() const override;
};

class ComputerPlayer : public Player
{
public:
    ComputerPlayer(const std::string &name) : Player(name) {}

    void play() override;
    void printWinningMsg() const override;
};
