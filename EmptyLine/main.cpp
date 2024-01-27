#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout<<"Enter a number: ";
    getline(cin, name, '\n');

    if(name.empty())
        cout<<"Yeah";
    else {
        int n = atoi(name.c_str());
        cout<<"The number: "<<n<<" and 10 added is: "<<n+10<<endl;
    }
    return 0;
}
