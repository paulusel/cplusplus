#include <iostream>

using namespace std;

int main(){

    double Area = 0, length = 0, width = 0;

    cout << "Please enter the length of the room" << endl;
    cin >> length;
    
    cout << "Please enter the width of the room" << endl;
    cin >> width;

    Area = length * width;

    cout << "Area of your room is: " << Area << endl;

    return 0;
}
