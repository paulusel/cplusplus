#include <iomanip>
#include <iostream>

int main(){
    float mark[3][4] = {60, 73.5, 57.25, 80, 41.8,67, 89, 54};
    std::cout << "Size of marks is " << sizeof(mark)/4 << "\n";
/*
 *    for(float row[4]: mark){
 *        for(float n: row)
 *            std::cout << n << " ";
 *        std::cout << "\n";
 *    }
 *
 */
    std::cout << "\n";
    //std::cout.width(4);
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++)
            std::cout << mark[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "\n";
    std:: cout << "The size of age is: " << sizeof(mark)/4 << "\n";
    //std::cout.width(4);
    int age[3][4] = {
        {26,37, 16},
        {24,20, 18, 48},
        {60, 33, 80}
    };

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++)
            std::cout << age[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}
