#include <iostream>
#include <cmath>

int main(){

    double one = 1.000, two = 1.414, three = 1.732, four = 2.000, five = 2.236;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(3);

    std::cout << "N" << "\t" << "Square Root" << std::endl;
    std::cout << "1" << "\t" << one << std::endl;
    std::cout << "2" << "\t" << two << std::endl;
    std::cout << "3" << "\t" << three << std::endl;
    std::cout << "4" << "\t" << four << std::endl;
    std::cout << "5" << "\t" << five << std::endl;
    
    std::cout << std::endl;

    // Doing essentially the same thing with sqrt function from cmath library
    std::cout << "N" << "\t" << "Square Root" << std::endl;
    for(int i = 1; i < 6; i++){
        std::cout << i << "\t" << sqrt(i) << std::endl;
    }
    
    return 0;
}