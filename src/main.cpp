#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <TGUI/TGUI.hpp>
#include <TGUI/Backend/SFML-Graphics.hpp>
#include "../includes/Task.hpp"

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "PixelPlanner");
    window.setFramerateLimit(144);

    tgui::Gui   gui{window};

    std::string datestr = __DATE__;
    Task        task("Do homework", datestr);

    // tgui::Button::Ptr button = tgui::Button::create();
    auto editbox = tgui::EditBox::create();
    tgui::CheckBox::Ptr check = tgui::CheckBox::create("Task1");
    gui.add(check);
    gui.mainLoop();
}
