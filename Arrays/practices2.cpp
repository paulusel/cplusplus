#include <iostream>

using namespace std;

int main(){
    double sales[3][4] {};

    for(int i = 0; i<3; i++){
        cout<<"Enter "<<i+1<<"th row numbers"<<endl;
        for(int j=0; j<4; j++){
            cin>>sales[i][j];
        }
    }

    double fr {0}, fc {0}, sr {0}, tr {0}, tc {0}, fco {0};  
    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            if(i==0)
                fr += sales[i][j];
            if(j==0)
                fc += sales[i][j];
            if(i==1)
                sr += sales[i][j];
            if(j==2)
                tc += sales[i][j];
            if(i==2)
                tr += sales[i][j];
            if(j==3)
                fco += sales[i][j];
        }
    }

    cout<<"Sum of first row: "<<fr<<endl;
    cout<<"Sum of first column: "<<fc<<endl;
    cout<<"Sum of second row: "<<sr<<endl;
    cout<<"Sum of third column: "<<tc<<endl;
    cout<<"Sum of third row: "<<tr<<endl;
    cout<<"Sum of fourth column: "<<fco<<endl;
 
    return 0;
}
