#include <iostream>
#include <vector>
using namespace std;


int binary_search_iter(vector<int> v, int low, int high, int target) {
	while (low <= high) {
		int mid = (low + high) >> 1;
		if (target == v[mid]) {
			return mid;
		}
		else if (target > v[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
}


int binary_search_cond(vector<int> v, int low, int high, int target) {
	if (low > high) {
		return false;
	}
	else {
		int mid = (low + high) >> 2;
		if (target == v[mid]) {
			return mid;
		}
		else if (target > v[mid]) {
			return binary_search_cond(v, mid + 1, high, target);
		}
		else {
			return binary_search_cond(v, low, mid - 1, target);
		}
	}
}

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << binary_search_iter(v, 0, v.size() - 1, 2) << '\n';
	cout << binary_search_cond(v, 0, v.size() - 1, 2) << '\n';
}