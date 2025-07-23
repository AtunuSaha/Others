#include <iostream>
using namespace std;

void fMinMax(int arr[], int size, int& minVal, int& maxVal, int& minPos, int& maxPos) {
    minVal = INT_MAX;
    maxVal = INT_MIN;
    for (int i = 0; i < size; i++) {

        if (arr[i] < minVal) {
            minVal = arr[i];
            minPos = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxPos = i;
        }
    }
}


int main() {

    int myArray[] = {30, 5, 20, 100, 4, 9, 46};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int minValue, maxValue, minPosition, maxPosition;
    fMinMax(myArray, arraySize, minValue, maxValue, minPosition, maxPosition);

    cout << "Minimum value is: " << minValue << " at position number: " << minPosition << endl;
    cout << "Maximum value is: " << maxValue << " at position number: " << maxPosition << endl;

    return 0;
}
