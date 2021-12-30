#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s; 
    int size, x, type;
    set<int>::iterator itr;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> type >> x;
        if(type == 1){
            s.insert(x);
        } else if(type == 2){
            s.erase(x);
        }
        else if (type == 3){
            itr = s.find(x);
            if(itr != s.end()){
                cout << "Yes\n"; 
            }else{
                cout << "No\n";                 
            }
        }
                        
    }
    return 0;
}



