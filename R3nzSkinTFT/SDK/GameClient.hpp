#pragma once

#include <cstdint>

#include "GameState.hpp"
#include "Pad.hpp"

class GameClient {
	PAD(0xC)
		GGameState_s gameState;
};