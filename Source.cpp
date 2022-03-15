#include <SFML/Graphics.hpp>
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;

    int xpos = 400;
    int ypos = 400;
    int size = 100;

    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 120; j++) {
                circle.setRadius(size);
                float pos_x = (300 - (i * 100)) * (cos(j * (3.1415926535 / 60))) + 300;
                float pos_y = (300 - (i * 100)) * (sin(j * (3.1415926535 / 60))) + 300;
                circle.setFillColor((sf::Color(100, 0, (200/3) * (i + 1), 0)));
                circle.setOutlineColor((sf::Color(100, 0, (200 / 3) * (i + 1), 50)));
                circle.setPosition(pos_x, pos_y);
                circle.setOutlineThickness(5);
                window.draw(circle);
            }
        }

        window.display();

    }//end game loop-------------------------------------------------

    return 0;
} //end main