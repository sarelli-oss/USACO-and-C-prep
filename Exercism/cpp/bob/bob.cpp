#include "bob.h"
#include <algorithm>
#include <cctype>
#include <string>



namespace bob {

    std::string hey(std::string word) {

        word.erase(std::remove(word.begin(), word.end(), ' '), word.end());     

        if(word.empty() || std::all_of(word.begin(), word.end(), ::isspace)) {
            return "Fine. Be that way!";
        }

        else if(std::any_of(word.begin(), word.end(), ::isalpha) && !std::any_of(word.begin(), word.end(), ::islower) && word[word.length()-1] == '?'){

            return "Calm down, I know what I'm doing!";
        }

        else if(word[word.length()-1] == '?'){

            return "Sure.";
        }
        
        else if (std::any_of(word.begin(), word.end(), ::isalpha) && 
                 !std::any_of(word.begin(), word.end(), ::islower)) {

            return "Whoa, chill out!";
        }

        

        

        else {
            return "Whatever.";
        }








        
    }


}  // namespace bob
