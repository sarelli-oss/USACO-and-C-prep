#include "atbash_cipher.h"
#include <string>
#include <cctype>

namespace atbash_cipher {

std::string encode(std::string word) {
    const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string result = "";
    int count = 0; 

    for (char ch : word) {
        if (std::isalnum(ch)) {
            
            
            if (count > 0 && count % 5 == 0) {
                result += ' ';
            }

            if (std::isalpha(ch)) {
                char lower_ch = std::tolower(ch);
                size_t pos = alphabet.find(lower_ch);
                result += alphabet[25 - pos];
            } else if (std::isdigit(ch)) {
                result += ch; 
            }

            count++;
        }
    }

    return result;
}

std::string decode(std::string word) {
    const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string result = "";

    for (char ch : word) {
        if (std::isalnum(ch)) {
            if (std::isalpha(ch)) {
                char lower_ch = std::tolower(ch);
                size_t pos = alphabet.find(lower_ch);
                result += alphabet[25 - pos];
            } else if (std::isdigit(ch)) {
                result += ch;
            }
        }
    }

    return result;
}



} // namespace atbash_cipher