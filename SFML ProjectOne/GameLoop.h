#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
using namespace sf;
class GameLoop {

private:
RenderWindow *Window;
Event _gameEvent;

public:
	GameLoop();
	void MainGameLoop();

	Event GetCurrentEvent();

	void SetEvent(Event& _eventhappened);

	void WindowIntilization();
	void WindowCreation();

	void Update();
	void Render();
	~GameLoop();
	
};