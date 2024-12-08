#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(sf::VideoMode(1920, 1080),"First Game Screen");
    Event gameEvent;
    
    while (window.isOpen()) {
      
        if (window.pollEvent(gameEvent)) {
            gameEvent.type = Event::Closed;
            window.close();
        }
        

        window.clear();
        window.display();
        

    }


    return 0;
}