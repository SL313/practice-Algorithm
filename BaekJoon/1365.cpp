#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int N, tele, array[100000] = { 0 }, M = 0;
	vector<int> line;

	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tele;
		line.push_back(tele);
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (line[i] > line[j]) {
				if (array[j] >= array[i]) array[i] = array[j] + 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
		M = max(M, array[i]);
	M += 1;

	cout << N - M << '\n';

	return 0;
}
