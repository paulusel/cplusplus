#include <iostream>
#include <string>

int main(){
    std::string name {};
    char name2[30] {};

    std::cin.getline(name2, 30);
    std::cout << name2 << "\n";

    name = std::cin.get();
    std::cout<<name<<"\n";

    return 0;
}
