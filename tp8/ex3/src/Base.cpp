#include "Base.hpp"

#include <iostream>

#include "DerivedInt.hpp"
#include "DerivedString.hpp"

std::string Base::type() const
{
    const auto* derivedString = dynamic_cast<const DerivedString*>(this);
    if(derivedString != nullptr){
        return "String";
    }
    const auto* derivedInt = dynamic_cast<const DerivedInt*>(this);
    if(derivedInt != nullptr){
        return "Int";
    }
    return "Base";
}



std::ostream& operator<<(std::ostream& os, const Base& self)
{   
    self.print(os);
    return os;
}