#include "GameStateBase.h"
#include "GSIntro.h"
#include "GSMenu.h"

GameStateBase* GameStateBase::CreateState(StateTypes st) {
	GameStateBase* gs = nullptr;
	switch (st)
	{
	case INVALID:
		break;
	case INTRO:
		gs = new GSIntro();
		break;
	case MENU:
		gs = new GSMenu();
		break;
	case PLAY:
		break;
	case END:
		break;
	default:
		break;
	}
	return gs;
}
