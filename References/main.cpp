#include <iostream>
#include <ostream>

std::ostream& f(std::ostream& out){
    return out;
}

int number(){
    return 2;
}

std::string name(std::string&& name){
    return name;
}

int main(){

    std::ostream& out {std::cout};

    int num {3};
    int& n {num};

    //int&& number {number()};

    std::string nm {name("Paulos")};
    out<<nm<<"\n";

    f(std::cout);

    out<<"Works\n";
    //std::ostream& dout {nullptr};

    if (out) {
        out<<"Reference as boolean!\n";
        //out<<number;
    }
    
    return 0;
}
