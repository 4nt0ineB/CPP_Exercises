#pragma once

#include <iostream>
#include <ostream>
#include <string>

class Material
{
    // Affiche le nom d'un materiau.
    friend std::ostream& operator<<(std::ostream& stream, const Material& material) { 
        stream << material._name;
        return stream; 
    }

public:
    Material(const std::string& name) 
        : _name { name }
    {
        std::cout << _name << " was created" << std::endl;
    }

    ~Material() 
    {
        std::cout << _name << " was destroyed" << std::endl;
    }

    const std::string& get_name() const 
    {
        return _name;
    }
private:
    std::string _name;
};
