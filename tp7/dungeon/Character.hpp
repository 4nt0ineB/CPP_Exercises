#pragma once

#include "Entity.hpp"
#include "Trap.hpp"
#include "Potion.hpp"
#include "Logger.hpp"


class Character : public Entity 
{
public:
    Character (int x, int y)
        : Entity(x, y)
    {}

    ~Character()
    {
        logger << "A character died at position (" << get_x() << ","<< get_y() << ")" << std::endl; 
    }

    char get_representation() const override { return _repr; }
    void interact_with(Entity& other) override 
    {
        auto* trap = dynamic_cast<Trap*>(&other);
        if(trap != nullptr)
        {
            trap->consume();
            _repr = _repr == '0' ? 'o' : (_repr == 'o' ?  '_' : _repr);
        }
        auto* potion = dynamic_cast<Potion*>(&other);
        if(trap != nullptr)
        {
            potion->consume();
            _repr = _repr == 'o' ? '0' : (_repr == '_' ?  'o' : _repr);
        }
    } 

    bool should_destroy() const override
    {
        return _repr == '_';
    }

private:
    char _repr = '0';
};