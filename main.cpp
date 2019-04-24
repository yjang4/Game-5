#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <Player.h>
#include <Monster.h>
#include <Button.h>
#include <Message.h>
using namespace std;
using namespace sf;

int main()
{
    Font font;
    font.loadFromFile("arial.ttf");
    RenderWindow window(VideoMode(1000, 800), "Game");
    window.setFramerateLimit(60);
    srand(time(NULL));

    Texture t1, t2;
    t1.loadFromFile("monsters.png");
    t2.loadFromFile("playerAndEquipments.png");
    Player player(t2);
    Monster monster(t1);
    player.setStats(100, 20);
    monster.setStats(100, 5);
    Button statsButton(window, font, "Stats", Vector2f(200, 750));

    SoundBuffer buffer1;
    buffer1.loadFromFile("attack.wav");
    Sound sound1;
    sound1.setBuffer(buffer1);

    Music music1;
    music1.openFromFile("awesomeness.wav");
    music1.play();
    music1.setLoop(true);

    Message m;
    m.setMessage("Defeated the slime monster in a sane way", font);
    m.setButtons(window, font, "Yes", "No", 1);
    while (window.isOpen())
    {
        Event event;

        statsButton.update();
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case Event::Closed:
                    window.close();
                    break;
                case Event::KeyReleased:
                    if (event.key.code == Keyboard::Space && monster.isAlive())
                    {
                        sound1.play();
                        monster.takeDamage(player.getDamage());
                        player.takeDamage(monster.getDamage());
                    }
                    break;
                case Event::MouseButtonReleased:
                    if(statsButton.isMouseOn())
                    {

                    }
                    break;
                default:
                    break;
            }
        }
        window.clear(Color(50, 79, 107));
        window.draw(monster);
        window.draw(player);
        window.draw(statsButton);
        window.draw(m);
        window.display();

    }

    return 0;
}
