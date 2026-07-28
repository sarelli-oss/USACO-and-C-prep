#include "armstrong_numbers.h"
#include <string>
#include <cmath>

namespace armstrong_numbers {

    bool is_armstrong_number(int num) {


        int sum{0};

        std::string num_string{std::to_string(num)};

        for(size_t i{0}; i < num_string.length(); i++) {

            sum += std::pow(num_string[i] - '0', num_string.length());
        }

        if(sum == num) {
            return true;
        }

        else {
            return false;
        }

        


    }



}  // namespace armstrong_numbers
