// Takes a number and prints its equivalent in base 2 number system
#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    int rem;
    long num;
    std::vector<int> bits;

    std::cout << "Enter the number: ";
    std::cin >> num;
    //std::cout << std::endl;

    do{
        rem = num % 2;
        num = num/2;

        bits.push_back(rem);

    }while( num > 0 );
    
    // Reverse entries in vector 
    std::reverse(bits.begin(), bits.end());

    std::cout << "The equivalent binary value is: ";

    for( auto bit: bits){
        std::cout << bit;
    }

    std::cout << std::endl;
}
