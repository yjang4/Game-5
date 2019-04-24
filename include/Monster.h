#ifndef MONSTER_H
#define MONSTER_H

#include <Entity.h>
#include <Basic.h>
using namespace sf;
class Monster : public Entity
{
    public:
        Monster(Texture &texture);
        virtual ~Monster();


    protected:

    private:


};

#endif // MONSTER_H
