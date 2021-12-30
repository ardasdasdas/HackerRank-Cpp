#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size;
    int n = 0;
    int k;
    cin >> size;
    cin >> n;

    int** A = new int*[size];
    int index1, index2;

    for (int i = 0; i < size; i++) {
        cin >> k;
        A[i] = new int[k];
        for (int j = 0; j < k; j++) 
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> index1;
        cin >> index2;
        cout << A[index1][index2] << endl;
    }
    system("pause");
}
