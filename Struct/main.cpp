#include <iostream>

struct Tresti; // this is allowed?
struct Tresti; // this is allowed?

int main(){
    //Tresti name; // And not this?

    std::cout << "dkdkdk";

    return 0;
}

struct Tresti{ char* name; int month; /* holds name, month */};
