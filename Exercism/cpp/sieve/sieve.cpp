#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int num) {

        std::vector<int> all_primes;
        for(int i{0}; i <= num; i++) {
            int sum{0};

            if(num <2) {
                return all_primes;
            }

            if(num == 2) {
                all_primes.push_back(2);
                return all_primes;
            }

            if(num > 2){

                if(i >= 2) {
                    for(int h{2}; h < i; h++) {

                if(i % h == 0) {
                    sum++;


                }
                }   

                if(sum == 0) {
                    all_primes.push_back(i);
                }

                }
            
            
            
        }



        }
        return all_primes;


    }




}  // namespace sieve
