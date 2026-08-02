#include "lasagna_master.h"
#include <vector>

namespace lasagna_master {

    int preparationTime(const std::vector<std::string>& layers, int time) {
        return layers.size() * time;

    }

    amount quantities(const std::vector<std::string>& layers) {
        amount result{0, 0.0};
        
        for(size_t i{0}; i < layers.size(); i++) {
            if(layers[i] == "noodles") {
                result.noodles += 50;

            }

            else if(layers[i] == "sauce") {
                result.sauce += .2;
            }
        }

        return result;
    }

    void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& other_recipe){

        my_recipe.back() = other_recipe.back();

    }

    std::vector<double> scaleRecipe(const std::vector<double>& amount, int num) {
        std::vector<double> new_recipe(amount.size());
        
        for(size_t i{0}; i < amount.size(); i++) {
            new_recipe[i] = amount[i] * (num/2.0);

        }
        return new_recipe;
    }

    void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secret) {
        my_recipe.back() = secret;
    }







}  // namespace lasagna_master
