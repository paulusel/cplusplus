#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char ch = 'a';

    cout << setfill('*') << setw(5);
    cout << "ch" << "\n";

    int i = 1;
    cout << i << endl;

    cout << setw(5);
    cout << ch << "\n";

    return 0;
}
