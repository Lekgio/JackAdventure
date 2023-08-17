#include "GameStateMachine.h"
#include "GameStateBase.h"

GameStateMachine::GameStateMachine()
{
    m_running = true;
    m_ActivesState = nullptr;
    m_NextState = nullptr;
}

GameStateMachine::~GameStateMachine()
{
}

void GameStateMachine::ChangeState(GameStateBase* state)
{
    m_NextState = state;
}

void GameStateMachine::ChangeState(StateTypes st)
{
    GameStateBase* gs = GameStateBase::CreateState(st);
    ChangeState(gs);
}

void GameStateMachine::PushState(StateTypes st)
{
    GameStateBase* gs = GameStateBase::CreateState(st);
    if (!m_StateStack.empty()) {
        m_StateStack.back()->Pause();
    }
    m_NextState = gs;
}

void GameStateMachine::PopState()
{
    if (!m_StateStack.empty()) {
        m_StateStack.back()->Exit();
        m_StateStack.pop_back();
    }
    if (!m_StateStack.empty()) {
        m_StateStack.back()->Resume();
    }
}

bool GameStateMachine::isRunning()
{
    return false;
}

void GameStateMachine::Quit()
{
}

void GameStateMachine::PerformStateChange()
{
}

GameStateBase* GameStateMachine::currentState() const
{
    return nullptr;
}

GameStateBase* GameStateMachine::nextState() const
{
    return nullptr;
}

bool GameStateMachine::NeedToChangeState()
{
    return false;
}

bool GameStateMachine::HasState()
{
    return false;
}
