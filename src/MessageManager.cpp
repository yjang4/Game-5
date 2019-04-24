#include "MessageManager.h"

MessageManager::MessageManager()
{
    index = 0;
}

MessageManager::~MessageManager()
{
    //dtor
}
void MessageManager::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(vec[index], states);
}
void MessageManager::addMessage(Message &m)
{
    vec.push_back(m);
}
bool MessageManager::hasMessage()
{
    return vec.size() > 0;
}
