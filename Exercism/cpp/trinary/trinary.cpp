#include "trinary.h"
#include <string>
#include <cmath>


namespace trinary {

    int to_decimal(std::string n) {

        int sum{};

        for(size_t i{0}; i < n.length(); i++) {

            if(n.length() > 1) {
                sum += (n[i] - '0') * pow(3, n.length() - i - 1);
            }
            else {
                sum += (n[i] - '0') * pow(3, 0);

            }

            if(n[i] - '0' != 0 && n[i] - '0' != 1 && n[i] - '0' != 2) {

                sum = 0;
                break;
            }


        }
        
        return sum;


    }


}  // namespace trinary
