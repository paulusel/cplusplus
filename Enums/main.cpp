#include <iostream>

using namespace std;

enum class Light : int {red = 1, yellow = 2, green = 3};

int main(){
     Light displayed = Light::red;

     if (displayed == Light::green){
        cout<<"Allowed to pass"<<endl;
     }
     else 
        cout<<"Stop!\n";

    int n = static_cast<int>(displayed);
    cout<<n<<endl;

    displayed = static_cast<Light>(3);
    if(displayed == Light::green)
        cout<<"The light is cast!"<<endl;

    return 0;
}
