#pragma once

#include <iostream>

class Base
{

    friend std::ostream& operator<<(std::ostream& os, const Base& self);

public:

    virtual bool is_null() const = 0;
    virtual void print(std::ostream& os) const = 0;

    std::string type() const;
    virtual bool operator==(const Base& other) const = 0;

private:
    
};


