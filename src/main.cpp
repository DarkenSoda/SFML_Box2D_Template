#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>
#include "Time.h"
#include <cmath>

int main() {
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Mirror");
    window.setFramerateLimit(60);


    while (window.isOpen()) {
        Utils::Time::Update();

        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();

        }

        window.clear();
        window.display();
    }
}
