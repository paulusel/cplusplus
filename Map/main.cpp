#include <map>
#include <iostream>
#include <string>

int main(){
    std::map<std::string, double> perf{
        {"Friday Night", 40}, {"Saturday Morning", 50}, {"Saturday Noon", 65.5},
        {"Saturday Night", 70}, {"Sunday Morning", 60}, {"Sunday Noon", 20},
        {"Sunday Night", 50}, {"Monday Morning", 90}
    };

    for(auto day: perf){
        std::cout<<day.first<<" : "<<day.second<<"\n";
    }

    std::cout<<perf["Friday Night"];
    ++perf["Sunday Noon"];

    return 0;
}
