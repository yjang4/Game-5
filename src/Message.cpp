#include "Message.h"

Message::Message()
{
    setBox(rect, Vector2f(500, 400), Vector2f(600, 400), Color(0, 0, 0, 200), Color::Black, true);
}
Message::~Message()
{
    //dtor
}
void Message::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(rect, states);
    target.draw(text, states);
    target.draw(b1, states);
    target.draw(b2, states);
}
void Message::setMessage(string s, Font &font)
{
    setText(font, s, Vector2f(220, 215), text, 30, Color::White, false);
}
void Message::setButtons(Window &window, Font &font, string n1, string n2, int n)
{
    int height = 550;
    int center = 500;
    if(n == 1)
    {
        b1.setButton(window, font, n1, Vector2f(center, height));
    }
    else if(n == 2)
    {
        b1.setButton(window, font, n1, Vector2f(center - 150, height));
        b2.setButton(window, font, n2, Vector2f(center + 150, height));
    }

}
void Message::update()
{
    b1.update();
    b2.update();
}
