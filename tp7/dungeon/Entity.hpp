#pragma once

#include "Random.hpp"
<<<<<<< HEAD
#include "Logger.hpp"
=======
>>>>>>> upstream/2024/tp8

class Entity
{
public:
    Entity() = default;

    Entity(int x, int y)
        : _x { x }
        , _y { y }
    {}

<<<<<<< HEAD
    virtual ~Entity() = default;

    int get_x() const { return _x; }
    int get_y() const { return _y; }

    virtual char get_representation() const = 0;

    virtual void update() { random_move(_x, _y); }

    virtual void interact_with(Entity& other) 
    {
        logger << "here" << std::endl;
    }

    virtual bool should_destroy() const { return false; }
=======
    int get_x() const { return _x; }
    int get_y() const { return _y; }

    char get_representation() const { return '?'; }

    void update() { random_move(_x, _y); }
>>>>>>> upstream/2024/tp8

private:
    int _x = 0;
    int _y = 0;
};
