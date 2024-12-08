#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1920, 1080), "First Game Screen");
    Event gameEvent;

    while (window.isOpen()) {
      
        while (window.pollEvent(gameEvent)) {
            if (gameEvent.type == Event::Closed) { 
                window.close(); 
            }
        }

        window.clear(Color::Green); 
        window.display(); 
    }

    return 0;
}