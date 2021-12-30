#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    int size, temp;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    std::vector<int>::iterator low;
    bool isExists = false;
    cin >> size;
    for(int i = 0;i< size;i++){
        cin >> temp;
        if (std::binary_search(v.begin(), v.end(),temp)){
            isExists = true;
        }
        low = std::lower_bound(v.begin(), v.end(), temp);
        if(isExists)
            cout << "Yes " << (low - v.begin() + 1) << "\n";
        else {
            cout << "No " << (low - v.begin() + 1) << "\n";
        }
        isExists = false;
    }
    
    return 0;
}
