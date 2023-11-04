#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    double* arr = new double[N];


    for (int i = 0; i < N; i++) {
        cout << "Enter " << i + 1 << "element: ";
        cin >> arr[i];
    }

    double sumNegative = 0.0;
    double minElement = numeric_limits<double>::max();
    double maxElement = numeric_limits<double>::min();
    int minIndex = -1;
    int maxIndex = -1;
    double productBetweenMinMax = 1.0;
    double productEvenIndices = 1.0;

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
            if (minIndex == -1 || arr[i] < arr[minIndex]) {
                minIndex = i;
                minElement = arr[i];
            }
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
                maxElement = arr[i];
            }
        }
        if (i % 2 == 0) {
            productEvenIndices *= arr[i];
        }
    }

    if (minIndex > maxIndex) {
        swap(minIndex, maxIndex);
        swap(minElement, maxElement);
    }

    for (int i = minIndex + 1; i < maxIndex; i++) {
        productBetweenMinMax *= arr[i];
    }

    cout << "The sum of negative elements: " << sumNegative << endl;
    cout << "Product of elements between min and max: " << productBetweenMinMax << endl;
    cout << "The product of elements with even numbers: " << productEvenIndices << endl;
    cout << "The sum of elements between the first and last negative elements: " << sumNegative - minElement - maxElement << endl;

    delete[] arr;
	return 0;
}