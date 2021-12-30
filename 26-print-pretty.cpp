#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << left << hex << showbase << nouppercase;
        cout << (long long) A << endl;

        cout.precision(2);
        cout << showpos << fixed << setfill('_') << setw(15) << right;
        cout << B << endl;

        cout.precision(9);
        cout << noshowpos << uppercase << scientific;
        cout << C << endl;
	}