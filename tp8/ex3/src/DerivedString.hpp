#pragma once
#include <string>
#include "Base.hpp"


class DerivedString : public Base
{
public:
    DerivedString(std::string str)
        : _str { std::move(str) }
    {}

    bool is_null() const override
    {
        return _str == "";
    }

    void print(std::ostream& os) const override
    {
        os << _str;
    }

    bool operator==(const Base& other) const override
    {
        if(type() != other.type()){
            return false;
        }
        const auto* derivedString = dynamic_cast<const DerivedString*>(&other); 
        return derivedString && _str == derivedString->_str;
    }

    bool operator==(const DerivedString& other) const
    {
        return _str == other._str;
    }

    const std::string& data() const
    {
        return _str;
    }

private:
    std::string _str;
};