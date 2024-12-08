#include "GameLoop.h"

GameLoop::GameLoop()
{
	WindowIntilization();
	WindowCreation();
}

void GameLoop::MainGameLoop()
{
	
	while (this->Window->isOpen()) {

		while (Window->pollEvent(_gameEvent)) {
			if (_gameEvent.type == Event::Closed) {
				Window->close();
				
			}
		}
		this->Window->clear(Color(255, 239, 204));
		Update();
		Render();
		Window->display();
}

}

Event GameLoop::GetCurrentEvent()
{
	return Event();
}

void GameLoop::SetEvent(Event& _eventhappened)
{
	_eventhappened = _gameEvent;
}
void GameLoop::WindowIntilization()
{
	this->Window = NULL;
}
void GameLoop::WindowCreation()
{
	this->Window = new RenderWindow(VideoMode(1920, 1080),"GameOg");
}
void GameLoop::Update()
{
}
void GameLoop::Render()
{
}

GameLoop::~GameLoop()
{
	delete(this->Window);
}

