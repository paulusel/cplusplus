#include <cctype>
#include <iostream>

int main(){
    char symbol;

    std::cout << "Enter a character: ";
    std::cin >> symbol;

    if( !isalpha(symbol) ){
        std::cout << symbol << " is not an alphabetic character." << std::endl;
        return 1;
    }

    switch (symbol){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            std::cout << symbol << " is a vowel." << std::endl;
            break;
        default:
            std::cout << symbol << " is a consonant." << std::endl;
    }

    return 0;
}
