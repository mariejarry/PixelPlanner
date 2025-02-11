#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "../includes/Task.hpp"

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "PixelPlanner");
    window.setFramerateLimit(144);

    std::string datestr = __DATE__;
    Task    task("Do homework", datestr);

    while (window.isOpen())
    {
        const sf::Font jersey("includes/fonts/Jersey10-Regular.ttf");
        sf::Text date(jersey, datestr, 50);
        sf::Color coral(0xFF7550FF);
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        window.clear();
        date.setFillColor(coral);
        date.setPosition({2,5});
        window.draw(date);
        window.display();
    }
}
