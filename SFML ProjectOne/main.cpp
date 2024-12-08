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
        // Poll and handle events
        while (window.pollEvent(gameEvent)) {
            if (gameEvent.type == Event::Closed) { // Check if the event is "Closed"
                window.close(); // Close the window
            }
        }

        window.clear(); // Clear the screen (default color is black)
        window.display(); // Display the updated frame
    }

    return 0;
}