#pragma once
#include "Object.hpp"

class CopyablePtr 
{

public: 
    CopyablePtr() 
    {}

    CopyablePtr(int value)
        : _object { new Object { value } }
    {}

    CopyablePtr(CopyablePtr& other) 
        : _object { other._object == nullptr ? nullptr : new Object { *other._object } }
         
    {}

    CopyablePtr(CopyablePtr&& other) 
        : _object { std::move(other._object) }
    {
        other._object = nullptr;
    }

    CopyablePtr& operator=(const CopyablePtr& other)
    {
        if(this != &other) 
        {
            if(_object != nullptr) 
            {
                delete _object;
            }
            _object = new Object { *other._object };
        }
        return *this;
    }

    CopyablePtr& operator=(CopyablePtr&& other)
    {
        if(this != &other) 
        {
            if(_object != nullptr) 
            {
                delete _object;
            }
            _object = other._object;
            other._object = nullptr;
        }
        return *this;
    }

    ~CopyablePtr()
    {
        if(_object != nullptr)
        {
            delete _object;
        }
    }

    bool operator==(std::nullptr_t) const
    {
        return _object == nullptr;
    }

    Object& operator*() const 
    {
        return *_object;
    }

    void operator=(std::nullptr_t) 
    {
        delete _object;
        _object = nullptr;
    }

private:
    Object* _object = nullptr;
};