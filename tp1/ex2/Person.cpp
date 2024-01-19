#include "Person.hpp"

Person::Person(std::string first_name, std::string surname)
    : _first_name{first_name}, _surname{surname} {}

std::string Person::first_name()
{
    return _first_name;
}

std::string Person::surname()
{
    return _surname;
}