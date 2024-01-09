#include <iostream>

int main(){
    int nums[6] {8,2,9,4,5,1}, copy[3] {};

    for(int i {1}, j {0}; i<6; i+=2, j++){
            copy[j]=2*nums[i];
    }

    std::string name {};
    char name2[30] {};
    std::cin.getline(name2, 10);
    for(int num : nums)
        std::cout<<num<<" ";
    std::cout<<"\n";
    for(int num : copy)
        std::cout<<num<<" ";

    return 0;
}
