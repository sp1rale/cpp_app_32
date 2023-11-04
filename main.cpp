#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the array size: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Enter the array elements: ";
	for (int i = 0; i < n; i++) {
		cout << "Element " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "The array is in reverse order: ";
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	delete[] arr;

	return 0;
}