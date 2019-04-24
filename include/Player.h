#ifndef PLAYER_H
#define PLAYER_H

#include <Entity.h>
using namespace sf;
class Player : public Entity
{
    public:
        Player(Texture &texture);
        virtual ~Player();

    protected:

    private:
};

#endif // PLAYER_H
