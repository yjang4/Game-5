#include "Basic.h"

void setText(Font& font, string s, Vector2f pos, Text &text, float ctrSize, Color color, bool center)
{
    text.setFont(font);
    text.setCharacterSize(ctrSize);
    text.setString(s);
    FloatRect fl = text.getLocalBounds();
    if(center) text.setOrigin(fl.left + fl.width / 2.0f, fl.top + fl.height / 2.0f);
    text.setPosition(pos);
    text.setFillColor(color);
}
void setBox(RectangleShape &rect, Vector2f pos, Vector2f boxSize, Color fillColor, Color outlineColor, bool center)
{
    rect.setSize(boxSize);
    if(center) rect.setOrigin(Vector2f(boxSize.x / 2, boxSize.y / 2));
    rect.setPosition(pos.x, pos.y);
    rect.setFillColor(fillColor);
    rect.setOutlineThickness(4.0f);
    rect.setOutlineColor(outlineColor);
}

