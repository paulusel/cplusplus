#include <iostream>

using namespace std;

int main(){
    union Cheat{
        int* ptr = {};
        int num;
    };

    class Name{
        string name;
        void prnt();
    };
    //void Name::prnt(){} //Error somehow

    Cheat cht;
    cht.num = 103944885;
    int* ptr = cht.ptr;
    cout<<cht.ptr;

    return 0;
}
