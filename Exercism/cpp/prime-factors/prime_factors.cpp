#include "prime_factors.h"
#include <vector>

namespace prime_factors {

    std::vector<long long> of(long num) {

        std::vector<long long> divisors;

    for (long long factor = 2; factor * factor <= num; ++factor) {
        while (num % factor == 0) {
            divisors.push_back(factor);
            num /= factor; // 👈 Reduces num on each hit!
        }
    }

    if (num > 1) {
        divisors.push_back(num);
    }

    return divisors;


        

       

        




        
    }

    


    




}  // namespace prime_factors
