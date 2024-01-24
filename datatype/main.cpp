//Print size of primitive datatypes
#include <iostream>

using namespace std;

int main(){
    
    bool truth = true;

    cout << "Strange output is " << truth << endl;
    cout << endl;
    
    cout << "Size of 'bool' is: " << sizeof(bool) << endl;
    cout << "Size of 'char' is: " << sizeof(char) << endl;
    cout << "Size of 'short' is: " << sizeof(short) << endl;
    cout << "Size of 'int' is: " << sizeof(int) << endl;
    cout << "Size of 'signed int' is: " << sizeof(signed int) << endl;
    cout << "Size of 'unsigned int' is: " << sizeof(unsigned int) << endl;
    cout << "Size of 'long' is: " << sizeof(long) << endl;
    //cout << "Size of 'long long' is: " << sizeof(long long) << endl;
    cout << "Size of 'float' is: " << sizeof(float) << endl;
    cout << "Size of 'double' is: " << sizeof(double) << endl;
    cout << "Size of 'long double' is: " << sizeof(long double) << endl;

    return 0;
}
