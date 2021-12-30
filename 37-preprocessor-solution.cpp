
#define toStr(str) "Result ="
#define io(x) cin >> x
#define FUNCTION(a, b) 
#define INF 10000000
#define minimum(min, x) if(x < min) min = x
#define maximum(max, x) if(x > max) max = x
#define foreach(x, i) for(int i = 0; i < x.size(); i++)
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}