#include <iostream>
#include "Person.hpp"

int main()
{
    auto person = Person{"Palluche", "La Faluche"};
    std::cout << "La personne s'appelle ";
    std::cout << person.first_name() << " " << person.surname() << std::endl;
    return 0;
}