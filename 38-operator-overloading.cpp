#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix {
public:
    Matrix() {}
    vector<vector<int>> a;
    Matrix operator+(Matrix& m) {
        Matrix returnMatrix;
        vector<int> b;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[0].size(); j++) {
                b.push_back(a[i].at(j) + m.a[i].at(j));
            }
            returnMatrix.a.push_back(b);
            b.clear();
        }
        return returnMatrix;
    }
};
int main() {
    int cases, k;
    cin >> cases;
    for (k = 0; k < cases; k++) {
        Matrix x;
        Matrix y;
        Matrix result;
        int n, m, i, j;
        cin >> n >> m;
        for (i = 0; i < n; i++) {
            vector<int> b;
            int num;
            for (j = 0; j < m; j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for (i = 0; i < n; i++) {
            vector<int> b;
            int num;
            for (j = 0; j < m; j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x + y;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
