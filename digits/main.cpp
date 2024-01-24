// Takes a number and prints its equivalent in base 2 number system
#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    int rem;
    long num;
    std::vector<int> digits;

    std::cout << "Enter the number: ";
    std::cin >> num;
    //std::cout << std::endl;

    do{
        rem = num % 10;
        num = num/10;

        digits.push_back(rem);

    }while( num > 0 );
    
    // Reverse entries in vector 
    //std::reverse(digits.begin(), digits.end());

    std::cout << "The equivalent binary value is: ";

    for( auto digit: digits){
        std::cout << digit;
    }

    std::cout << std::endl;
}
