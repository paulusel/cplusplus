#include <cstdio>
//#include <iostream>

using namespace std;

struct ipaddr {
    int q1: 8;
    int q2: 8;
    int q3: 8;
    int q4: 8;
    ipaddr() : q1 {}, q2 {}, q3 {}, q4 {} {};
    void print();
    ~ipaddr() {};
};

void ipaddr::print(){ printf("%d.%d.%d.%d",q1,q2,q3,q4); }

int main(){
    ipaddr addr {};
    addr.q1 = 123;
    addr.q2 = 89;
    addr.q3 = 100;
    addr.q4 = 102;
    addr.print();
    return 0;
}
