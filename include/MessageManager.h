#ifndef MESSAGEMANAGER_H
#define MESSAGEMANAGER_H

#include <SFML/Graphics.hpp>
#include <Message.h>
using namespace sf;
using namespace std;
class MessageManager : public Drawable
{
    public:
        MessageManager();
        virtual ~MessageManager();
        virtual void draw(RenderTarget& target, RenderStates states) const;
        void addMessage(Message &m);
        bool hasMessage();


    private:
        vector<Message> vec;
        int index;
};

#endif // MESSAGEMANAGER_H
