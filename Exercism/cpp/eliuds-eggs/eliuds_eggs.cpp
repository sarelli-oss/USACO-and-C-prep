#include "eliuds_eggs.h"
#include <string>
#include <bitset>

namespace chicken_coop {

    int positions_to_quantity(int num) {

        std::string binary_num = std::bitset<64>(num).to_string();

        int num_of_1s{0};

        for(size_t i{0}; i < binary_num.length(); i++) {

            if(binary_num[i] == '1') {
                num_of_1s++;
            }
        }

        return num_of_1s;






    }




}  // namespace chicken_coop
