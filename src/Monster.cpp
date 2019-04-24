#include "Monster.h"

Monster::Monster(Texture &texture) : Entity(texture)
{
    body.setTextureRect(IntRect(0, 0, 25, 25));
    body.setScale(-10.0, 10.0);
    body.setPosition(Vector2f(900, 430));
    healthBar.setPosition(Vector2f(800, 100));

}
Monster::~Monster()
{
    //dtor
}

