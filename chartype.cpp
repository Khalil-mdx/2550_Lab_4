#include <iostream>
#include <cctype>

int main() {
    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    int charType;
    if (isalpha(character)) {
        charType = 1; // Alphabetical
    } else if (isdigit(character)) {
        charType = 2; // Digit
    } else if (ispunct(character)) {
        charType = 3; // Punctuation
    } else {
        charType = 4; // Unrecognised
    }

    switch (charType) {
        case 1:
            switch (tolower(character)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    std::cout << character << " is a vowel" << std::endl;
                    break;
                default:
                    std::cout << character << " is a consonant" << std::endl;
            }
            break;
        case 2:
            std::cout << character << " is a digit" << std::endl;
            break;
        case 3:
            std::cout << character << " is punctuation" << std::endl;
            break;
        case 4:
            std::cout << character << " is unrecognised" << std::endl;
            break;
    }

    return 0;
}
