#pragma once
#include "IPState.h"

class IPlayer {
public:
	virtual void changeNextState(IPState nextState) = 0;
private:

};