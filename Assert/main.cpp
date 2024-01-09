#define NDEBUG

#include <iostream>
#include <cassert>

int main(){
    bool status =  false;
    
    assert(status);
    std::cout << "Successful!" << std::endl;

    return 0;
}