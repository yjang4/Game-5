#include "Bar.h"

Bar::Bar()
{
    Vector2f defaultPos = Vector2f(0, 0);
    setBox(inner, defaultPos, Vector2f(300, 30), Color::Red, Color::Transparent, true);
    setBox(outer, defaultPos, Vector2f(300, 30), Color::White, Color::Black, true);
}
void Bar::setPosition(Vector2f pos)
{
    inner.setPosition(pos);
    outer.setPosition(pos);
}

Bar::~Bar()
{
    //dtor
}
void Bar::draw(RenderTarget& target, RenderStates states) const
{
    target.draw(outer, states);
    target.draw(inner, states);

}
void Bar::setScale(float l, float r)
{
    inner.setScale(l, r);
}
