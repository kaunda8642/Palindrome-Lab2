#include "palindrome.h"
#include <algorithm>
#include <cctype>

bool is_palindrome(const std::string& str) {
    std::string cleaned;

    // Convert to lowercase for case insensitivity
    for (char ch : str) {
        cleaned += std::tolower(ch);
    }

    // Compare reversed string with original
    return std::equal(cleaned.begin(), cleaned.end(), cleaned.rbegin());
}