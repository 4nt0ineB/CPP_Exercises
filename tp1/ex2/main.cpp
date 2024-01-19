#include <iostream>
#include "Person.hpp"

int main()
{
    Person person;
    person.first_name = "Palluche";
    person.surname = "La Faluche";
    std::cout << "La personne s'appelle ";
    std::cout << person.first_name << " " << person.surname << std::endl;

    return 0;
}