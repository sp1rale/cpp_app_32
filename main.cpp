#include <iostream>
using namespace std;

int main()
{
	double sides[5];
	double perimeter = 0.0;
	cout << "Enter the length of the sides of the pentagon:\n ";
	for (int i = 0; i < 5; i++) {
		cout << "Side " << i + 1 << ": ";
		cin >> sides[i];
		perimeter += sides[i];
	}
	cout << "The perimeter of the pentagon is " << perimeter << endl;

	return 0;
}