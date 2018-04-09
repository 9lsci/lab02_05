#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void main() {
	vector<int> vec;
	int num = 0;
	while (cin >> num) {
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end(), greater<int>());
	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;
	system("pause");
}
