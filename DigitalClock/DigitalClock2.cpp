#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <ctime>

int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML Digital Clock");
    sf::Clock clock;
    sf::Time time;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        time = clock.getElapsedTime();

        sf::Font font;
        if (!font.loadFromFile("arial.ttf")) {
            // error handling
        }

        std::time_t currentTime = std::time(nullptr);
        std::tm* localTime = std::localtime(&currentTime);
        std::string timeStr = std::to_string(localTime->tm_hour) + ":" +
                              std::to_string(localTime->tm_min) + ":" +
                              std::to_string(localTime->tm_sec);

        sf::Text text(timeStr, font);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Red);
        text.setStyle(sf::Text::Bold);

        window.draw(text);
        window.display();
    }

    return 0;
}
