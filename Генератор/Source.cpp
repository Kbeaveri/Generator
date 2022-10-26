#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main() {
	int n, k;
	cin >> k >> n;
	vector <int> arr(k);
	for (int i = 0; i < k; i++) {
		arr[i] = 1;
	}
	int j = 1;
	int num = k - 2;
	while (arr[0] <= n) {
		if (arr[k - j] <= n) {
			for (int i = 0; i < k; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			arr[k - j]++;
		}
		else {
			if (arr[k - j-1] == n) {
				while (arr[k - j - 1] == n&&j!=k) {
					j--;
				}
				if (j == k) {
					break;
				}
				else {
					arr[k - j - 1]++;
					for (int i = k - j; i < k; i++) {
						arr[i] = 1;
					}
					j = 1;
				}
			}
			else {
				for (int i = k - j; i < k; i++) {
					arr[i] = 1;
				}
				arr[k - j - 1]++;
				j = 1;
			}
		}
	}
}