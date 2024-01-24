#include <iostream>

int main(){

    int pods = 0, people = 0;

    std::cout << "Insert the number of pods and number of people." << std::endl;
    std::cin >> pods >> people;
    std::cout   << "The number of pods is " << pods << " and the number of people is "
                << people << std::endl;

    return 0;
}