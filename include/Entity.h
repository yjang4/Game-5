#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <Bar.h>
using namespace sf;
class Entity : public Drawable
{
    public:
        Entity();
        Entity(Texture &texture);
        virtual ~Entity();
        virtual void draw(RenderTarget& target, RenderStates states) const;
        void setStats(float h, int d);
        void takeDamage(int dmg);
        int getDamage();
        bool isAlive();

    protected:
        float health, maxHealth;
        Sprite body;
        Texture *entityTexture;
        int damage;
        Bar healthBar;


};

#endif // ENTITY_H
