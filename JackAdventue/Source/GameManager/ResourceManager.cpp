#include "ResourceManager.h"

ResourceManager::ResourceManager()
{
	m_Path = "../Data/";
	m_TexturePath = m_Path + "Textures/";
	m_FontPath = m_Path + "Fonts/";
}

ResourceManager::~ResourceManager()
{
}

void ResourceManager::addTexture(std::string name)
{
	sf::Texture* texture = new sf::Texture();
	texture->loadFromFile(m_TexturePath + name + ".png");

	auto it = m_MapTexture.find(name);
	if (it != m_MapTexture.end()) {
		return;
	}
	m_MapTexture.insert(std::pair<std::string, sf::Texture*>(name, texture));
}

void ResourceManager::removeTexture(std::string name)
{
	auto it = m_MapTexture.find(name);
	if (it == m_MapTexture.end()) {
		return;
	}
	if(it->second != nullptr) delete it->second;
	m_MapTexture.erase(it);
}

sf::Texture* ResourceManager::getTexture(std::string name)
{
	auto it = m_MapTexture.find(name);
	if (it != m_MapTexture.end()) {
		return it->second;
	}
	sf::Texture* texture = new sf::Texture();
	texture->loadFromFile(m_TexturePath + name + ".png");
	m_MapTexture.insert(std::pair<std::string, sf::Texture*>(name, texture));
	return texture;

}

void ResourceManager::addFont(std::string name)
{
	sf::Font* font = new sf::Font();
	font->loadFromFile(m_FontPath + name + ".ttf");

	auto it = m_MapFont.find(name);
	if (it != m_MapFont.end()) {
		return;
	}
	m_MapFont.insert(std::pair<std::string, sf::Font*>(name, font));
}

void ResourceManager::removeFont(std::string name)
{
	auto it = m_MapFont.find(name);
	if (it == m_MapFont.end()) {
		return;
	}
	if (it->second != nullptr) delete it->second;
	m_MapFont.erase(it);
}

sf::Font* ResourceManager::getFont(std::string name)
{
	auto it = m_MapFont.find(name);
	if (it != m_MapFont.end()) {
		return it->second;
	}
	sf::Font* font = new sf::Font();
	font->loadFromFile(m_FontPath + name + ".ttf");
	m_MapFont.insert(std::pair<std::string, sf::Font*>(name, font));
	return font;
}
