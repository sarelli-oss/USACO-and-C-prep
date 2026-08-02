#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, int time = 2);

amount quantities(const std::vector<std::string>& layers);

void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& other_recipe);

std::vector<double> scaleRecipe(const std::vector<double>& amount, int num);

void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secret);


}  // namespace lasagna_master
