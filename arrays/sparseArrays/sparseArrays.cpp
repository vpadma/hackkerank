#include <map>
#include <iostream>
#include <string>
using namespace std;

typedef map<string, int> strDict;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    string tmp;
    strDict dict;
    
    cin >> N;
    for (size_t i = 0; i < N; ++i) {
        cin >> tmp;
        if (dict.find(tmp) != dict.end()) {
            dict[tmp] += 1;
        } else {
            dict[tmp] = 1; //the [] operator initializes element for us, be sure to use assignment op
        }
    }
    
    cin >> Q;
    for (size_t i = 0; i < Q; ++i) {
        cin >> tmp;
        strDict::iterator element = dict.find(tmp);
        if (element != dict.end()) {
            cout << element->second << endl; 
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}