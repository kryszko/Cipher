#include <iostream>
#include <string>
#include "keystream.h"
#include "menu.h"


std::string key_to_stream(const std::string& short_key, size_t key_lengh) {
    std::string final_key;
    for (size_t i = 0; i < key_lengh; ++i) {
        char key_char = short_key[i % short_key.length()];
        final_key += std::toupper(key_char) - 'A';
    }
    return final_key;
}
