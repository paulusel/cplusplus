#include <cstring>
#include <iostream>

using namespace std;

int main(){
    char days[7][10] {"Mon", "Tue", "Wed", "Thr",
                        "Fr", "Sat", "Sun"};
    cout<<"The number of days is: "<<strlen(days[0])<<endl;
    for(auto day : days)
        cout<<day<<" ";
    cout<<endl<<endl;

    char wknd[7][10] {{"Excellent"}, {}, {"Good"}, {"Bad"}};
    cout<<"The size of my weekend descriptor is: "<<strlen(wknd[3])<<endl;

    for(auto day : wknd)
        cout<<day<<" ";
    cout<<endl<<endl;

    string months[12] {"Jan", "Feb", "March", "April",
                        "May", "June", "July"};
    cout<<"The size of month name is: "<<months[2].size()<<endl;
    for(auto month : months)
        cout<<month<<" ";
    
    return 0;
}
