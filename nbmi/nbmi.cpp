#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(){
    const int n {5};
    string names[n][3] {};
    double data[n][3] {};
    int password {};

    cout<<"Enter password: ";
    cin>>password;
    if(password!=1234){
        cout<<"Incorrect password!";
        exit(1);
    }


    for(int i = 0; i<n; i++){
        cout<<"Person "<<i+1<<". Enter full name, height and weight\n";
        cin>>names[i][0]>>names[i][1]>>names[i][2];
        cin>>data[i][0]>>data[i][1];
        data[i][2]=data[i][0]/(data[i][1]*data[i][1]);
    }


    //cout.width(10);
    //cout.adjustfield;
    cout<<setw(30)<<left<<"FName"<<setw(10)<<"BMI";
    cout<<"\n";
    for(int i = 0; i<n; i++){
        cout<<setw(10)<<names[i][0]<<setw(10)<<names[i][1]<<setw(10)<<names[i][2]<<setw(10)<<data[i][2];
        cout<<"\n";
    }

    return 0;
}
