#pragma once
#include <string>
#include <memory>

class StringInstancePair
{

public:
    StringInstancePair(std::string str)
        : _str { std::move(str) }
        , _counter { std::make_unique<InstanceCounter>()}
    {}

  
    StringInstancePair(const StringInstancePair& other)
        : _str { other._str }
        , _counter { new InstanceCounter(*other._counter) }
    {}

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
    std::unique_ptr<InstanceCounter> _counter;
};
