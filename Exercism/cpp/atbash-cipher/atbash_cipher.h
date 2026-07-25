#pragma once
#include <string>

namespace atbash_cipher {

std::string encode(std::string word);
std::string decode(std::string word); // <--- Add this!

} // namespace atbash_cipher