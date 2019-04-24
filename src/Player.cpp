#include "Player.h"

Player::Player(Texture &texture) : Entity(texture)
{
    body.setTextureRect(IntRect(0, 0, 25, 25));
    body.setScale(10.0, 10.0);
    body.setPosition(Vector2f(100, 400));
    healthBar.setPosition(Vector2f(200, 100));
}

Player::~Player()
{
    //dtor
}
