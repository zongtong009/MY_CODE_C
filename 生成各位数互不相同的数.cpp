#include <iostream>

using namespace std;
int a[10];
int book[10];

int n = 4;

void dfs(int step) {
	if (step == 9) {
		if ((a[1] * 10000 + a[2] * 1000 + a[3] * 100 + a[4] * 10 + a[5]) /
		        (a[6] * 10000 + a[7] * 1000 + a[8] * 100 + a[9] * 10 + a[10]) == n) {
			printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a[1], a[2], a[3], a[4], a[5],
			       a[6], a[7], a[8], a[9],
			       a[10]);
			return;
		}
	}
	for (int i = 0; i <= 9; ++i) {
		if (book[i] == 0) {
			a[step] = i;
			book[i] = 1;
			dfs(step + 1);
			book[i] = 0;
		}
	}
}

int main() {
	dfs(1);
	return 0;
}
