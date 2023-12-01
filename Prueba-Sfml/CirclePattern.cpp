#include "CirclePattern.hpp"
#include <cmath>

const float PI = 3.14159265f;

CirclePattern::CirclePattern(int numPuntos, float radio) : numPuntos(numPuntos), radio(radio) {
    
    for (int i = 0; i < numPuntos; ++i) {
        float angulo = 2 * PI * i / numPuntos;
        float x = radio * std::cos(angulo) + 400;
        float y = radio * std::sin(angulo) + 400;
        puntos.push_back(sf::Vector2f(x, y));
    }

    
    lineas.setPrimitiveType(sf::Lines);
    for (int i = 0; i < numPuntos; ++i) {
        for (int j = i + 1; j < numPuntos; ++j) {
            lineas.append(sf::Vertex(puntos[i], sf::Color::Red));
            lineas.append(sf::Vertex(puntos[j], sf::Color::Green));
        }
    }
}

void CirclePattern::draw(sf::RenderWindow& window) {
    window.draw(lineas);
}
