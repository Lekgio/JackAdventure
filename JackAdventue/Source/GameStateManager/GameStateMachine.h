#pragma once
#include "../GameManager/Singleton.h"
#include <list>

class GameStateBase;

enum StateTypes {
	INVALID = 0,
	INTRO,
	MENU,
	PLAY,
	END,
};

class GameStateMachine :public CSingleton<GameStateMachine>{
public:
	GameStateMachine();
	~GameStateMachine();

	void ChangeState(GameStateBase* state);
	void ChangeState(StateTypes st);
	void PushState(StateTypes st);
	void PopState();

	bool isRunning();
	void Quit();

	void PerformStateChange();

	GameStateBase* currentState() const;
	GameStateBase* nextState() const;
	bool NeedToChangeState();
	bool HasState();

private:
	std::list<GameStateBase*> m_StateStack;
	GameStateBase* m_ActivesState;
	GameStateBase* m_NextState;
	bool m_running;
};