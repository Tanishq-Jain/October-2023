#include <bits/stdc++.h>
using namespace std;

bool sortedAfterSwap(int A[], bool B[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		if (B[i]) {
			j = i;
			while (B[j])
				j++;
			sort(A + i, A + 1 + j);
			i = j;
		}
	}
	for (i = 0; i < n; i++) {
		if (A[i] != i + 1)
			return false;
	}

	return true;
}
int main()
{
	int A[] = { 1, 2, 5, 3, 4, 6 };
	bool B[] = { 0, 1, 1, 1, 0 };
	int n = sizeof(A) / sizeof(A[0]);
	return 0;
}
