#ifndef BAR_H
#define BAR_H

#include <SFML/Graphics.hpp>
#include <Basic.h>
using namespace sf;
class Bar : public Drawable
{
    public:
        Bar();
        Bar(Vector2f pos);
        virtual ~Bar();
        virtual void draw(RenderTarget& target, RenderStates states) const;
        void setPosition(Vector2f pos);
        void setScale(float l, float r);

    protected:

    private:
        RectangleShape inner, outer;
};

#endif // BAR_H
