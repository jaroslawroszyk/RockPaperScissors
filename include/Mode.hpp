#pragma once

namespace mode
{
    enum class PlayMode
    {
        HumanVsPc = 1,
        PcVsPc = 2
    };

    constexpr auto normalMode = PlayMode::HumanVsPc;
    constexpr auto simulateMode = PlayMode::PcVsPc;
    PlayMode getPlayMode();
}
