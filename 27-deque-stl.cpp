#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    int numberOfSubQueues = n - k + 1;
    std::deque<int> mydeque;
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        mydeque.push_back(arr[i]);
    }
    for (int i = 0; i < numberOfSubQueues; i++) {
        for (int j = 1; j < k; j++) {
            if (mydeque.at(0) < mydeque.at(j)) {
                max = mydeque.at(j);
            }
        }
        cout << max << " ";
        mydeque.pop_front();
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
