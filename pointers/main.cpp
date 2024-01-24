#include <iostream>

using namespace std;

int main(){
/*
 *    long double mark = {10};
 *
 *    cout<<"Value: "<<mark<<endl;
 *    cout<<"Address 1: "<<&mark<<endl;
 *    cout<<"Address 2: "<<&mark+1<<endl;
 *    cout<<"Address 3: "<<&mark+2<<endl;
 *    
 */
    int mark = {15};
    int* ptr;
    int& mrk = mark;
    int&& tmp = mark*mrk;

    int** pptr = &ptr;

    //ptr = 0;
    ptr = &mark;

    cout<<"Value 1: "<<mark<<endl;
    cout<<"Value 2: "<<ptr<<endl;
    cout<<"Value 3: "<<*ptr<<endl;
    cout<<"Value 4: "<<pptr<<endl;
    cout<<"Value 5: "<<*pptr<<endl;
    cout<<"Value 6: "<<**pptr<<endl;
    cout<<"Address 1: "<<&mark<<endl;
    cout<<"Address 2: "<<&ptr<<endl;
    cout<<"Address 3: "<<pptr<<endl;
    cout<<"Address 4: "<<*pptr<<endl;
    cout<<"Address 5: "<<&pptr<<endl;

    return  0;
}
