// Takes a number and prints its digtis revrsed 
#include <iostream>

int main(){

    long num, reverse;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int rem;
    reverse = 0;
    while( num > 0 ){
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num/10;
    }

    std::cout << "Digits reversed: " << reverse << std::endl;
}
