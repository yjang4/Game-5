#ifndef MESSAGE_H
#define MESSAGE_H

#include <SFML/Graphics.hpp>
#include <Basic.h>
#include <Button.h>
using namespace sf;
class Message : public Drawable
{
    public:
        Message();
        virtual ~Message();
        virtual void draw(RenderTarget& target, RenderStates states) const;
        void setMessage(string s, Font &font);
        void setButtons(Window &window, Font &font, string n1, string n2, int n);
        void update();

    protected:

    private:
        RectangleShape rect;
        Button b1, b2;
        Text text;
};

#endif // MESSAGE_H
