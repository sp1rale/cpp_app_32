#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of months: ";
    cin >> n;

    int* profits = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter profit for " << i + 1 << "month: ";
        cin >> profits[i];
    }

    int start, end;
    cout << "Enter a range of months: ";
    cin >> start >> end;

    if (start <= end && start >= 1 && end <= n) {
        int maxProfit = profits[start - 1];
        int minProfit = profits[start - 1];
        int maxMonth = start;
        int minMonth = start;

        for (int i = start; i <= end; i++) {
            if (profits[i - 1] > maxProfit) {
                maxProfit = profits[i - 1];
                maxMonth = i;
            }
            if (profits[i - 1] < minProfit) {
                minProfit = profits[i - 1];
                minMonth = i;
            }
        }

        cout << "The month with the maximum profit in the range: " << maxMonth << endl;
        cout << "A month with minimal profit in the range: " << minMonth << endl;
    }
    else {
        cout << "Incorrectly entered month range." << endl;
    }

    delete[] profits;
	return 0;
}