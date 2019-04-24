#include "Button.h"

Button::Button()
{

}
Button::Button(Window &window, Font &font, string name, Vector2f pos)
{
    this -> window = &window;
    setText(font, name, pos, text, 30, Color::Black, true);
    setBox(rect, pos, Vector2f(200, 50), Color::White, Color::Black, true);
}
void Button::setButton(Window &window, Font &font, string name, Vector2f pos)
{
    this -> window = &window;
    setText(font, name, pos, text, 30, Color::Black, true);
    setBox(rect, pos, Vector2f(200, 50), Color::White, Color::Black, true);
}
Button::~Button()
{
    //dtor
}
void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(rect, states);
    target.draw(text, states);
}
bool Button::isMouseOn()
{
    Vector2i mousePos = Mouse::getPosition(*window);
    FloatRect fl = rect.getGlobalBounds();
    return mousePos.x > fl.left && mousePos.x < fl.left + fl.width
            && mousePos.y > fl.top && mousePos.y < fl.top + fl.height;
}
void Button::update()
{
    if(isMouseOn())
    {
        rect.setFillColor(Color(211, 211, 211));
    }
    else rect.setFillColor(Color::White);
}
