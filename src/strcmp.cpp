#pragma once
#include <iostream>
#include <string>
#include "strcmp.hpp"

char to_lower_ascii(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int strcmp_case_insensitive(const std::string& s1, const std::string& s2) {
    size_t str1_len = s1.size();
    size_t str2_len = s2.size();

    if (str1_len > str2_len){
        return 1;
    }
    else if (str1_len < str2_len){
        return -1;
    }



    for (size_t i = 0; i < str1_len; i++) {
        char c1 = to_lower_ascii(s1[i]);
        char c2 = to_lower_ascii(s2[i]);

        if (c1 > c2) {
            return 1;
        } else if (c1 < c2) {
            return -1;
        }
    }

return 0;
}
