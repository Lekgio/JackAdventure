#pragma once
#include <SFML/Graphics.hpp>

class Animation :public sf::Sprite{
public:
	Animation(sf::Texture &texture, sf::Vector2i frameNum, float frameTime);
	void CalculateRectSize();
	void CalculateRectUV();
	void ApplyRect();
	void Update(float detaTime);
	void Reset();

	void setModeEndFrame(bool stop);
private:
	sf::Vector2i m_frameNum;
	sf::Vector2i m_currentFrame;

	float m_frameTime;
	float m_currentTime;

	sf::Vector2i m_rectUV;
	sf::Vector2i m_rectSize;
	sf::IntRect m_rect;

	bool m_modeStopAtEndFrame;
};