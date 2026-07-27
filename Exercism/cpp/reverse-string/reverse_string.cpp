#include "reverse_string.h"
#include <string>

namespace reverse_string {

    std::string reverse_string(std::string word) {

        std:: string reversed_word{""};

        


        for(size_t i{0}; i < word.length(); i++) {

            reversed_word += word[word.length() - 1 - i];



        }

        return reversed_word;

        

    }


// TODO: add your solution here

}  // namespace reverse_string
