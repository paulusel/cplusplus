#include <iostream>

using namespace std;

int main(){
    //double wknd[] = {70, 50, 65.5, 40, 20, 80, 75};
/*
 *    string timed[] = {"Friday Night", "Saturday Morning",
 *                    "Saturday Noon", "Saturday Night",
 *                    "Sunday Morning", "Sunday Noon",
 *                    "Sunday Night", "Mondat Morning"};
 *
 */
/*
 *    cout<<wknd<<"\n";
 *    cout<<wknd[3]<<"\n";
 *    cout<<wknd[8]<<"\n";
 *
 *    for(int i = 0; i < 8; i++){
 *        cout<<[>timed[i]<<" : "<<<]wknd[i]<<"\n";
 *    }
 *
 */

    std::string name = "Instrucive"; // C++ style
    char wknd[] = {'I','n','s','t','r','u','c','t','i','v','e','\0'}; // C style
    // days[] = "Instrucive";
    char other[] = "Instrucive"; // C style

    cout<<wknd<<"\n";
    cout<<other<<"\n";
    cout<<wknd[3]<<"\n";
    //cout<<wknd[15]<<"\n";
    double nums[][10] = {
        {3, 5, 6, 7},
    };

    for(char ch: wknd){
        cout<<ch;
    }
    return 0;
}
