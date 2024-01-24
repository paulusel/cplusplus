#include <iostream>

using namespace std;

int main() {

    int n;
    cout<<"How many students?\n";
    cin>>n;

    int *marks = new int[n];
    cout<<"Input grade for students.\n";
    for (int i = 0; i<n; ++i){
        cout<<(i+1)<<":";
        cin>>marks[i];
    }

    delete [] marks;
    cout<<"First mark is "<<*marks<<endl;
    marks = nullptr;

    return 0;
}
