#include "Entity.h"

Entity::Entity()
{

}

Entity::Entity(Texture &texture)
{
    entityTexture = &texture;
    body.setTexture(*entityTexture);
}

Entity::~Entity()
{
    //dtor
}
void Entity::draw(RenderTarget& target, RenderStates states) const
{
    target.draw(body, states);
    target.draw(healthBar, states);

}
void Entity::setStats(float h, int d)
{
    health = h;
    maxHealth = h;
    damage = d;
}
void Entity::takeDamage(int dmg)
{
    health -= dmg;

    if(!isAlive())
    {
        healthBar.setScale(0.0f, 1.0f);
        body.setTextureRect(IntRect(0, 0, 0, 0));
    }
    else healthBar.setScale(health / maxHealth, 1.0f);

}
int Entity::getDamage()
{
    return damage;
}
bool Entity::isAlive()
{
    return health > 0;
}
