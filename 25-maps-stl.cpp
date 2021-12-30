#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type;
    string name;
    map<string, int> m;
    cin >> q;
    for(int i=0, mark; i<q; i++){
        cin >> type >> name;
        if(type == 1){
            cin >> mark;
            m[name] += mark;
        }
        else if (type == 2){
            m.erase(name);
        }
        else {
            cout << m[name] << endl;
        }
    }
}
