// Convert celsius temperature scale to farenhieght
#include <iostream>

using namespace std;

int main(){

    char scale;
    float temperature;

    cout << "Enter temperatere value followed by C for Celcius and F for Fahrenheit scale" << std::endl;
    cin >> temperature >> scale;
    cout << endl;

    //ce_scale = 5 * (fh_scale - 32)/9;

    if(scale == 'C' || scale == 'c'){
        std::cout << "Temperature in Fahrenheit scale is: " <<  5 * (temperature - 32)/9 << std::endl;
    }
    else if(scale == 'F' || scale == 'f'){
        std::cout << "Temperature in Celsius scale is: " <<  ((9 * temperature)/5) + 32 << std::endl;
    }
    else{
        std::cout << "Unknown Temperature scale!" << std::endl;
        exit(1);
    }
    //cout << "Temperature: " << ce_scale << "C"<< endl;

    return 0;
}
