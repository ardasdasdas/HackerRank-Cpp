#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int size;
    vector<int>v;
    cin >> size;

    int input;
    for(int i = 0; i < size; i++){
        cin >> input;
        v.push_back(input);
    }
    int sil1,sil2,sil3;
    cin >> sil1;
    cin >> sil2;
    cin >> sil3;

    v.erase(v.begin() + sil1 - 1);
    v.erase(v.begin() + sil2 - 1, v.begin() + sil3 - 1);

    cout << v.size() << endl;
    for(int i = 0;i < v.size(); i++){
        cout << v[i] << " ";
    }  
    return 0;
}