#include <iostream>
#include <vector>
#include <string>

int main(){
    
    unsigned int numnames = 0;
    std::vector<std::string> names;

    std::cout << "How many names are there?" << std::endl;
    std::cin >> numnames;
    std::cin.ignore(100, '\n');
    //std::cout >> std::endl;

    for ( unsigned int i = 1; i <= numnames; i++){
        std::string name;

        std::cout << "Please enter the " << i << "th name. ";
        getline(std::cin, name);
        names.push_back(name);
    }

    std::cout << "The names you entered are: " << std::endl;
    for(auto name: names){
        std::cout << name << std::endl;
    }

    return 0;
}