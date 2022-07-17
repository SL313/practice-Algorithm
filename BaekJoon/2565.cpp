#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	int array[100] = { 0 }, N, M = 0;
	int x, y, num;
	cin >> num;
	vector<pair<int, int>> line;

	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		line.push_back(make_pair(x, y));
	}
	sort(line.begin(), line.end());

	for (int i = 1; i < num; i++) {
		for (int j = 0; j < i; j++) {
			if (line[i].second >= line[j].second) {
				if (array[j] >= array[i]) array[i] = array[j] + 1;
			}
		}
	}

	for (int i = 0; i < num; i++)
		M = max(M, array[i]);
	M += 1;

	cout << num - M << '\n';

	return 0;
}
