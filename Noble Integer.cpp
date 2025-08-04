#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr) {
	int n = arr.size();

	for (int i = 0; i < n; i++) {
		int count = 0;

		for(int j = 0; j<n; j++) {
			if (arr[j] > arr[i]) {
				count++;
			}
		}

		if (arr[i] == count) {
			cout << "1" << endl;
			return true;
		}
	}

	cout << "-1" << endl;
	return false;
}

int main() {
	vector<int> arr = {1, 1, 3, 3};
	solve(arr);
	return 0;
}
