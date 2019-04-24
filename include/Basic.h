#ifndef BASIC_H
#define BASIC_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>


using namespace sf;
using namespace std;
void setText(Font& font, string s, Vector2f pos, Text &text, float ctrSize, Color color, bool center);
void setBox(RectangleShape &rect, Vector2f pos, Vector2f boxSize, Color fillColor, Color outlineColor, bool center);
#endif // BASIC_H
