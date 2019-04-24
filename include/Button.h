#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <Basic.h>
using namespace sf;
using namespace std;
class Button : public Drawable
{
    public:
        Button();
        Button(Window &window, Font &font, string name, Vector2f pos);
        virtual ~Button();
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        bool isMouseOn();
        void update();
        void setButton(Window &window, Font &font, string name, Vector2f pos);

    private:

        Text text;
        RectangleShape rect;
        Window *window;
};

#endif // BUTTON_H
