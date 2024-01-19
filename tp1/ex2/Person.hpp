#pragma once
#include <string>

class Person
{
public:
    Person(std::string first_name, std::string surname);
    std::string first_name();
    std::string surname();

private:
    std::string _first_name;
    std::string _surname;
};