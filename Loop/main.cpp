#include <iostream>

using namespace std;

int main(){

    for(int k = 6; k >= 0 ; k--){
        for(int i = 6; i >= k; i-- ){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}
