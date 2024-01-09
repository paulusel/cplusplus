#include <iostream>

using namespace std;

int main(){
    double balances[4][6] {{1, 2, 3}, {1,2}, {1}, {1,2,3}};
    for(int i = 0; i<4; i++){
        for(int j {0}; j<6; j++){
            cout<<balances[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
