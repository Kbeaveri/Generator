#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int check(vector <int> arr, int n) {
	for (int i = arr.size() - 1; i >= 0; i--) {
		if (arr[i] != n) {
			return i;
		}
	}
	return -1;
}


int main() {
	int n, k;
	cin >> k >> n;
	vector <int> arr(k);
	for (int i = 0; i < k; i++) {
		arr[i] = 1;
	}
	int j = 1;
	int num = k-1;
	while (arr[0] <= n) {
		for (int i = 0; i < k; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		if (arr[num] < n) {
			arr[num]++;
			continue;
		}
		else {
			if (check(arr, n) != -1) {
				num = check(arr, n);
				arr[num]++;
				for (int i = num + 1; i < k; i++) {
					arr[i] = 1;
				}
				num = k - 1;
			}
			else {
				return 0;
			}
		}
	}
}