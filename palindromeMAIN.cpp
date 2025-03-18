#include <iostream>
#include "palindrome.h"

int main()
{
    std::string input;

    std::cout << "Enter a word: ";
    std::cin >> input;

    if (is_palindrome(input)) {
        std::cout << input << " is a palindrome!" << std::endl;
    }
    else {
        std::cout << input << " is not a palindrome." << std::endl;
    }

    return 0;
}


