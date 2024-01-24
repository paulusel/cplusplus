#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string raw;
    cout<<"Enter a line of string\n";
    getline(cin, raw);
    raw.push_back(' ');

    string shortest = raw;
    int wcount = 0;

/*
    //algorithm 1
    int begin = -1, size = raw.size();
    while (begin+1<size && isspace(raw[++begin]));
    for (int i = begin+1; i<size; ++i)
        if (isspace(raw[i])){
            if (i-begin < shortest.size()) shortest = raw.substr(begin, i-begin);
            while (i+1<size && isspace(raw[++i]));
            begin = i;
            ++wcount;
        }
*/

    //algorithm 2
    stringstream ss(raw);
    string str;
    while(ss>>str) {
        if(str.size() < shortest.size())
            shortest = str;
        ++wcount;
    }

    if (wcount == 0) shortest.erase();
    cout<<"Number of words: "<<wcount<<endl
        <<"The shortest word: "<<shortest<<endl;

    return 0;
}
