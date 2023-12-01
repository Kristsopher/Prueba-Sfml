
#include <SFML/Graphics.hpp>
#include "CirclePattern.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "Ojo de Mosca");
    CirclePattern pattern(17, 200.0f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        pattern.draw(window);
        window.display();
    }

    return 0;
}
