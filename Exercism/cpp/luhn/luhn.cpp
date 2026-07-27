#include "luhn.h"
#include <string> 
#include <algorithm>

namespace luhn {

    bool valid(std::string n) {

        n.erase(std::remove(n.begin(), n.end(), ' '), n.end());

        if (n.length() <= 1) {
            return false;
        }

        for (size_t i{0}; i < n.length(); i++) {
            if (n[i] - '0' < 0 || n[i] - '0' > 9) {
                return false;
            }
        }

        for (int h = n.length() - 2; h >= 0; h -= 2) {
            int doubled = (n[h] - '0') * 2;
            if (doubled > 9) {
                doubled -= 9;
            }

            n[h] = doubled + '0'; 
        }

        int sum{}; 
        for (size_t i{0}; i < n.length(); i++) {
            sum += n[i] - '0';
        }

        if (sum % 10 == 0) {
            return true;
        } else {
            return false;
        }

    }

}  // namespace luhn