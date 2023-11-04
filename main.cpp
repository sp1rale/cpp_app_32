#include <iostream>
using namespace std;

int main()
{
    double profits[12];
    int maxMonth = 0;
    int minMonth = 0;

    cout << "Enter profit for 12 months:" << endl;

    for (int i = 0; i < 12; i++) {
        cout << "Profit for " << i + 1 << "months: ";
        cin >> profits[i];

        if (profits[i] > profits[maxMonth]) {
            maxMonth = i;
        }

        if (profits[i] < profits[minMonth]) {
            minMonth = i;
        }
    }

    cout << "The month with maximum profit: " << maxMonth + 1 << endl;
    cout << "A month with minimal profit: " << minMonth + 1 << endl;

	return 0;
}