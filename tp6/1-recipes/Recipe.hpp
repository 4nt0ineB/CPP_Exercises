#pragma once

#include <ostream>
#include <vector>
#include <string>

class Recipe
{

    // Affiche l'identifiant et la formule d'une recette.
    friend std::ostream& operator<<(std::ostream& stream, const Recipe& recipe) { 
        stream << "(" << recipe._id << ") ";
        for(const auto& material: recipe._materials) 
        {
            stream << material << " ";
        }
        stream << "=> ";
        for(const auto& product: recipe._products) 
        {
            stream << product << " ";
        }
        return stream; 
    }
public: 
    Recipe(std::vector<std::string> material, std::vector<std::string> products)
        : _materials { std::move(material) }
        , _products { std::move(products) }
    {}

    const std::vector<std::string>& get_materials() const 
    {
        return _materials;
    }

    size_t get_id() const
    {
        return _id;
    }

private:
    std::vector<std::string> _materials;
    std::vector<std::string> _products;
    size_t _id = counter++;
    static inline size_t counter = 1;
};
