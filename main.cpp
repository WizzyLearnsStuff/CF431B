#include<iostream>

using namespace std;

int main() {
	int g[5][5];

	for (int i = 0; i < 25; ++i) {
		int a;
		cin >> a;
		g[i / 5][i % 5] = a;
	}

	int max = 0;
	for (int i1 = 0; i1 < 5; i1++)
	for (int i2 = 0; i2 < 5; i2++) {
		if (i2 == i1) continue;
	for (int i3 = 0; i3 < 5; i3++) {
		if (i3 == i1 || i3 == i2) continue;
	for (int i4 = 0; i4 < 5; i4++) {
		if (i4 == i1 || i4 == i2 || i4 == i3) continue;
		int i5 = 10 - i4 - i3 - i2 - i1;

		int sum = (g[i1][i2] + g[i2][i1] + g[i3][i4] + g[i4][i3]
		+ g[i2][i3] + g[i3][i2] + g[i4][i5] + g[i5][i4]
		+ g[i3][i4] + g[i4][i3]
		+ g[i4][i5] + g[i5][i4]);

		max = (sum > max) ? sum : max;
	}
	}
	}

	cout << max;
}
