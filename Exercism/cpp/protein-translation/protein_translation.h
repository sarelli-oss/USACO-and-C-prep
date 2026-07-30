#pragma once
#include <vector>
#include <string>

namespace protein_translation {

    std::vector<std::string> proteins(std::string codon);
    std::string translation(std::string part_of_codon);


}  // namespace protein_translation
