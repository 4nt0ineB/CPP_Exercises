#include "ProgramData.hpp"
#include <unordered_map>


void ProgramData::add_material(std::string name)
{
    _materials.emplace_back(std::make_unique<Material>(std::move(name)));
}

void ProgramData::get_materials(std::vector<const Material*>& materials) const
{
    for(const auto& material: _materials) 
    {
        materials.emplace_back(material.get());
    }
}

void ProgramData::register_recipe(std::vector<std::string> materials, std::vector<std::string> products)
{   
    auto recipe = std::make_unique<Recipe>(std::move(materials), std::move(products));
    _recipes.emplace_back(std::move(recipe));
    std::cout << *_recipes.back() << " has been registered" << std::endl;
}



void ProgramData::collect_doable_recipes(std::vector<const Recipe*>& recipes) const
{
   std::unordered_map<std::string, int> available_materials;

   for(const auto& material: _materials)
   {
        auto got = available_materials.find(material->get_name());
        if(got == available_materials.end())
        {
            available_materials.emplace(material->get_name(), 1);
        } 
        else
        {
            available_materials.at(material->get_name()) += 1;
        } 
   }

   for(const auto& recipe: _recipes)
   {
        auto can_cook = true;
        for(const auto& material: recipe.get()->get_materials())
        {
            if(available_materials.count(material) == 0)
            {
                can_cook = false;
                break;
            }
        }
        if(can_cook){
            recipes.emplace_back(recipe.get());
        }
   }

}

ProductionResult ProgramData::produce(size_t recipe_id)
{
    ProductionResult result;
    auto exists = false;
    for(const auto& recipe: _recipes)
    {
        if(recipe->get_id() == recipe_id)
        {
            exists = true;
            break;
        }
    }
    if(!exists) 
    {
        result.recipe = nullptr;
        return result;
    }
    

    return result;
}