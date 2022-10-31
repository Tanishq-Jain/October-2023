#include <iostream>
using namespace std;

{
	for (int i = 0; i < ar_size; i++) {
		int count = 0;
		for (int j = 0; j < ar_size; j++) {
			if (A[i] == A[j]) {
				count++;
			}
		}
		if (count == 1) {
			return A[i];
		}
	}
	return -1;
}
int main()
{
	int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
	int n = sizeof(ar) / sizeof(ar[0]);
	cout << "Element occurring once is "
		<< findSingle(ar, n);

	return 0;
}
