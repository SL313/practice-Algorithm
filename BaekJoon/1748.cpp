#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int N, temp, num = 0, result = 0;
	cin >> N;
	temp = N;
	while (temp > 0) {
		temp /= 10;
		num++;
	}
	if (num == 1) cout << N;
	else {
		for (int i = 1; i < num; i++)	result += (int)(9 * pow(10, i - 1) * i);
		result += (int)(num * (N - (pow(10, num - 1) - 1)));
		cout << result;
	}
	return 0;
}
