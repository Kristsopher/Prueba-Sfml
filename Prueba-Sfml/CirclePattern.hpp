#ifndef CIRCLE_PATTERN_HPP
#define CIRCLE_PATTERN_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class CirclePattern {
private:
    int numPuntos;
    float radio;
    std::vector<sf::Vector2f> puntos;
    sf::VertexArray lineas;

public:
    CirclePattern(int numPuntos, float radio);
    void draw(sf::RenderWindow& window);
};

#endif
