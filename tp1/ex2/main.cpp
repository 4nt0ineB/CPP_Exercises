#include <iostream>
#include <vector>

#include "Person.hpp"

int main()
{
    auto persons = std::vector<Person>{};
    std::string input;
    int number_of_persons;
    std::string::size_type sz;
    do
    {
        std::cout << "Nombre de personnes: " << std::flush;
        std::cin >> input;
        number_of_persons = std::stoi(input, &sz);
    } while (sz == 0);

    for (auto i = 0; i < number_of_persons * 2; i++)
    {
        std::string first_name = {(char)(i + 65), (char)(i + 97)};
        i++;
        std::string surname = {(char)(i + 65), (char)(i + 97)};
        std::cout << "Prenom: " << first_name << std::endl;
        std::cout << "Nom: " << surname << std::endl;
        persons.emplace_back(Person{first_name, surname});
    }

    std::cout << "Les personnes sont ";
    auto delimiter = "";
    for (auto p : persons)
    {
        std::cout << delimiter;
        std::cout << p.first_name() << " " << p.surname();
        delimiter = ", ";
    }
    std::cout << '.' << std::endl;

    return 0;
}