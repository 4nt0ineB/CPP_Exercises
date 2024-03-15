#pragma once
#include <string>
#include <memory>

class StringInstancePair
{

public:
    StringInstancePair(std::string str)
        : _str { std::move(str) }
        , _counter {new InstanceCounter{}}
    {}

    ~StringInstancePair()
    {
        delete _counter;
    }

    // StringInstancePair(const StringInstancePair& other)
    //     : _str { other._str }
    //     , _counter { other._counter }
    // {}

    // StringInstancePair(StringInstancePair&& other)
    //     : _str { std::move(other._str) }
    //     , _counter {}
    // {
      
    // }

    const std::string& get_str() const
    {
        return _str;
    }

    const InstanceCounter& get_instance_counter() const
    {
        return *_counter;
    }



private:
    std::string _str;
    InstanceCounter* _counter;
};
