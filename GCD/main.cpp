#include <iostream>

int gcd(int, int);

int main(){
    int first{0}, second{0};

    std::cout << "Enter two numbers: ";
    std::cin >> first >> second;
    std::cout << "\nGCD of " << first << " and " << second << " is "
        << gcd(first, second) << "\n";
    //int gcdab = gcd(first, second);
    //std::cout << "GCD: " << gcdab << "\n";

    return 0;
}

int gcd(int first, int second){
    //std::cout << "GCD of " << first << " and " << second << "\n";
    if(first%second == 0)
        return second;
    return gcd(second, first%second);
}
