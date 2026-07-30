#include "protein_translation.h"
#include <vector>
#include <string>

namespace protein_translation {

std::vector<std::string> proteins(std::string rna) {
    std::vector<std::string> acid;

    for (size_t i = 0; i < rna.length(); i += 3) {
        std::string codon = rna.substr(i, 3);

        if (codon == "UAA" || codon == "UAG" || codon == "UGA") {
            break;
        }

        if (codon == "AUG") {
            acid.push_back("Methionine");
        } else if (codon == "UUU" || codon == "UUC") {
            acid.push_back("Phenylalanine");
        } else if (codon == "UUA" || codon == "UUG") {
            acid.push_back("Leucine");
        } else if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG") {
            acid.push_back("Serine");
        } else if (codon == "UAU" || codon == "UAC") {
            acid.push_back("Tyrosine");
        } else if (codon == "UGU" || codon == "UGC") {
            acid.push_back("Cysteine");
        } else if (codon == "UGG") {
            acid.push_back("Tryptophan");
        }
    }

    return acid;
}

}  // namespace protein_translation