/*
* Trying function call by reference
*/
#include <iostream>

/*
void get_input(double* fscale);

void get_input(double* fscale){
    std::cout << "What is farenheigt temperature scale?" << std::endl;
    std::cin >> fscale;
    return;
}
*/
void print(double* fscale){
    std::cout << *fscale << std::endl;
    return;
}

int main(){

    double fscale = 0;
/*
    get_input(&fscale);
    std::cout << "The value you input is " << fscale << std::endl;
*/
    print(&fscale);
    return 0;    
}