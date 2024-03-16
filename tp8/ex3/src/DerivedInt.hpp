#pragma once

#include "Base.hpp"

class DerivedInt: public Base
{

public: 
     DerivedInt(int i)
        : _i { i }
    {}

    bool is_null() const override
    {
        return _i == 0;
    }

    void print(std::ostream& os) const override
    {
        os << _i;
    }

    bool operator==(const Base& other) const override
    {
        if(type() != other.type()){
            return false;
        }
        const auto* derivedInt = dynamic_cast<const DerivedInt*>(&other); 
        return derivedInt && _i == derivedInt->_i;
    }

    bool operator==(const DerivedInt& other) const
    {
        return _i == other._i;
    }


    int data() const
    {
        return _i;
    }

private:
    int _i;
};