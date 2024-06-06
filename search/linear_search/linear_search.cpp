#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> v, int findValue) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == findValue) {
			return i;
		}
	}
	return -1;
}