#include "Mode.hpp"
#include <iostream>

namespace mode
{
    PlayMode getPlayMode()
    {
        std::cout << "1) normal mode 2) simulating \n";
        int mode{0};
        std::cin >> mode;
        switch (mode)
        {
        case 1:
            return PlayMode::HumanVsPc;
        case 2:
            return PlayMode::PcVsPc;
        default:
            throw "Ops";
        }
        return getPlayMode();
    };
}