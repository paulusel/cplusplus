// Convert celsius temperature scale to farenhieght
#include <iostream>

using namespace std;

int main(){

    float fh_scale, ce_scale;

    cout << "Enter temperatere scale in farenhagnt: ";
    cin >> fh_scale;
    cout << endl;

    ce_scale = 5 * (fh_scale - 32)/9;

    cout << "Temperature in Celcius scale is: " << ce_scale << endl;

    return 0;
}
