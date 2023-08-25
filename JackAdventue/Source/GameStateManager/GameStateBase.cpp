#include "GameStateBase.h"
#include "GSIntro.h"
#include "GSMenu.h"
#include "GSPlay.h"
#include "GSSetting.h"
#include "GSAbout.h"
#include "GSHighScore.h"
#include "GSEnd.h"

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
		gs = new GSPlay();
		break;
	case SETTING:
		gs = new GSSetting();
		break;
	case ABOUT:
		gs = new GSAbout();
		break;
	case HIGHSCORE:
		gs = new GSHighScore();
		break;
	case END:
		gs = new GSEnd();
		break;
	default:
		break;
	}
	return gs;
}
