#include <iostream>

int main(){

    std::string names[] = {"Elias", "Birtanesh", "Elsabet", "Paulos"};

    for( auto name: names){
        std::cout << name << std::endl;
    }
    

    return 0;
}